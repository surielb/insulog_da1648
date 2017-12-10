/*
 * ssd1351.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */
#include "common.h"
#include "config.h"
#include "ssd1351.h"
#include "screen.h"
#include "peripherals.h"
#include <wchar.h>
#define START_DIM 0x07
#define LOW_DIM 0x04
static uint8_t brightness = START_DIM;
static int set_region(uint16_t x, uint16_t y, uint16_t w, uint16_t h);

uint16_t ref_frame[LINE_COUNT*BUFFER_LINES];




static bool gpio_configured = false;


static void gpio_deinit() {
        if (gpio_configured) {
                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_RST_PORT,CFG_GPIO_DISPLAY_RST_PORT);

                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_BS0_PORT,CFG_GPIO_DISPLAY_BS0_PIN);

                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_DNC_PORT,CFG_GPIO_DISPLAY_DNC_PIN);

                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_POWER_PORT,CFG_GPIO_DISPLAY_POWER_PIN);

        }

        gpio_configured = false;
}
static void gpio_init() {
        if (!gpio_configured) {
                //OLED_SPI_DIRECTION
                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_BS0_PORT,CFG_GPIO_DISPLAY_BS0_PIN);
                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_DNC_PORT,CFG_GPIO_DISPLAY_DNC_PIN);
                OS_DELAY(5);
                //delay_us(5);

                hw_gpio_set_active(CFG_GPIO_DISPLAY_RST_PORT,CFG_GPIO_DISPLAY_RST_PIN);
                periph_disable(&PERIPH_SCREEN);
                //ad_spi_bus_deactivate_cs(spi_display);

                //chip_select(PERIPH_SCREEN, FALSE);


                hw_gpio_set_active(CFG_GPIO_DISPLAY_POWER_PORT,CFG_GPIO_DISPLAY_POWER_PIN);

        }

        gpio_configured = true;
}




static inline void oled_write(bool command, void *buffer, size_t len) {

        periph_enable(&PERIPH_SCREEN);
        //ad_spi_bus_activate_cs(spi_display);

        if(command)
                hw_gpio_set_inactive(CFG_GPIO_DISPLAY_DNC_PORT,CFG_GPIO_DISPLAY_DNC_PIN);
        else
                hw_gpio_set_active(CFG_GPIO_DISPLAY_DNC_PORT,CFG_GPIO_DISPLAY_DNC_PIN);

        ad_spi_write(spi_display,buffer,len);
        periph_disable(&PERIPH_SCREEN);
}

static inline void writeCommand(uint8_t command) {
        oled_write(true, &command, 1);
}

static inline void writeData(uint8_t data) {

        oled_write(false, &data, 1);
}

static inline void setContrastImpl(uint8_t brightness) {
        writeCommand(SSD1351_CMD_COMMANDLOCK); // set command lock
        writeData(0x12);
        writeCommand(SSD1351_CMD_COMMANDLOCK); // set command lock
        writeData(0xB1);
        writeCommand(SSD1351_CMD_CONTRASTMASTER);
        writeData(brightness);
}
static bool saveMode = false;

unsigned int round_div(unsigned int dividend, unsigned int divisor)
{
    return (dividend + (divisor / 2)) / divisor;
}

void Screen_setContrastLevel(float level)
{
        uint8_t base = round_div(brightness,3);
        uint8_t b =base + ((brightness-base) * level);
        setContrastImpl(b);
        saveMode = true;
}


static void init() {
        //Animation_pause();
        gpio_init();
        // Initialization Sequence
        writeCommand(SSD1351_CMD_COMMANDLOCK);  // set command lock
        writeData(0x12);
        writeCommand(SSD1351_CMD_COMMANDLOCK);  // set command lock
        writeData(0xB1);

        writeCommand(SSD1351_CMD_DISPLAYOFF);           // 0xAE

        writeCommand(SSD1351_CMD_CLOCKDIV);             // 0xB1
        writeData(0xD1);

        writeCommand(SSD1351_CMD_MUXRATIO);
        writeData(127);

        writeCommand(SSD1351_CMD_DISPLAYOFFSET);        // 0xA2
        writeData(0x0);
        writeCommand(SSD1351_CMD_STARTLINE);    // 0xA2
        writeData(0);
        writeCommand(SSD1351_CMD_SETREMAP);
        writeData(
                        SSD1351_REMAP_COLOR_BGR | SSD1351_REMAP_SPLIT_ODDEVEN
                                        | SSD1351_REMAP_COLUMN_127/*SSD1351_REMAP_SCAN_DOWN*/);

        writeCommand(SSD1351_CMD_SETGPIO);
        writeData(0x00);

        writeCommand(SSD1351_CMD_FUNCTIONSELECT);
        writeData(0x01); // internal (diode drop)
#ifdef SET_SCREEN

#endif

        writeCommand(SSSD1351_CMD_SETPHASELENGTH);              // 0xB1
            writeCommand(0x32);

            writeCommand(SSD1351_CMD_VCOMH);                    // 0xBE
            writeCommand(0x05);

            writeCommand(SSD1351_CMD_NORMALDISPLAY);    // 0xA6

            writeCommand(SSD1351_CMD_CONTRASTABC);
            writeData(0xC8);
            writeData(0x80);
            writeData(0xC8);

            writeCommand(SSD1351_CMD_CONTRASTMASTER);
            writeData(brightness);

            writeCommand(SSD1351_CMD_SETVSL );
            writeData(0xA0);
            writeData(0xB5);
            writeData(0x55);

            writeCommand(SSD1351_CMD_PRECHARGE2);
            writeData(0x01);

#ifdef SET_SCREEN

        writeCommand(SSSD1351_CMD_SETPHASELENGTH);
        writeData(0x25);

        writeCommand(SSD1351_CMD_PRECHARGELEVEL);               // 0xB1
        writeCommand(0x17);
        writeCommand(SSD1351_CMD_PRECHARGE2);
        writeData(0x01);

        writeCommand(SSD1351_CMD_VCOMH);                        // 0xBE
        writeCommand(0x05);
#endif
        Screen_fillColor(0, 0, SSD1351WIDTH, SSD1351HEIGHT, 0);

        writeCommand(SSD1351_CMD_DISPLAYON);            //--turn on oled panel



}


static int set_region(uint16_t x, uint16_t y, uint16_t w, uint16_t h) {
        if ((x >= SSD1351WIDTH) || (y >= SSD1351HEIGHT))
                return -1;

        // Y bounds check
        if (y + h > SSD1351HEIGHT) {
                h = SSD1351HEIGHT - y - 1;
        }

        // X bounds check
        if (x + w > SSD1351WIDTH) {
                w = SSD1351WIDTH - x - 1;
        }

        // set location
        writeCommand(SSD1351_CMD_SETCOLUMN);
        writeData(x);
        writeData(x + w - 1);
        writeCommand(SSD1351_CMD_SETROW);
        writeData(y);
        writeData(y + h - 1);

        return w * h;
}

int Screen_write(uint16_t x, uint16_t y, uint16_t w, uint16_t h,uint8_t *buffer){
        int size = set_region(x, y, w, h);
       if (size < 0)
               return size;

       writeCommand(SSD1351_CMD_WRITERAM);
       oled_write(false,buffer,size * 2);
       return size;
}


int Screen_fillColor(uint16_t x, uint16_t y, uint16_t w, uint16_t h,uint16_t color) {
        int size = set_region(x, y, w, h);
        if (size < 0)
                return size;

        writeCommand(SSD1351_CMD_WRITERAM);


        wchar_t dbl= 0;

        ASSIGN_HOST_WORD_TO_LITTLE_ENDIAN_UNALIGNED_WORD(&((uint16_t *)&dbl)[0],color);
        ASSIGN_HOST_WORD_TO_LITTLE_ENDIAN_UNALIGNED_WORD(&((uint16_t *)&dbl)[1],color);

        size_t step = MIN(size,sizeof(ref_frame) / 2);
        wmemset((wchar_t *)ref_frame,dbl,step / 2);
        while(size){
                size_t take = MIN(size,step);
                oled_write(false,ref_frame,take * 2);
                size-=take;
        }

        return size;

}

int fill_pixels(uint16_t x, uint16_t y, uint16_t w, uint16_t h, void *data,
                size_t len) {
        int size = set_region(x, y, w, h);
        if (size < 0)
                return size;
        writeCommand(SSD1351_CMD_WRITERAM);
        if (len > size * 2)
                len = size * 2; //check bounds
        oled_write(false, data, len);
        return 0;
}



void Screen_init() {
        init();
}

void Screen_deinit(){
        gpio_deinit();
}

/**
 * Clears the lcd display and sets all to white (off)
 */
void clearLCD() {
        Screen_fillColor(0, 0, SSD1351WIDTH, SSD1351HEIGHT, 0);

}




static size_t convertBit(const uint8_t *bytes,uint8_t width, size_t len,uint16_t *output){
        size_t size = 0;
        int w =0;
        int curr_w;
        for(int i=0;i<len;i++){
                if(!w)
                        w= width;
                curr_w = MIN(w,8);
                w-= curr_w;
                for(int b=0;b<curr_w;b++){
                       if((*bytes & (1<<(7-b))) )
                               *output = 0xFFFF;
                       else
                               *output = 0x0000;

                       size++;
                       output++;
                }
                bytes++;
        }
        return size;
}

void Screen_drawChar(const uint8_t *buffer,size_t len,uint8_t x,uint8_t y, uint8_t width,uint8_t height){
        convertBit(buffer,width,len, ref_frame);
        Screen_write(x,y,width,height,(uint8_t *)ref_frame);
}
