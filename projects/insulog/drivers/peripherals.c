/*
 * peripherals.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#include "peripherals.h"
#include "config.h"

Pin_cfg PERIPH_FLASH= {
        .port = CFG_GPIO_SPI1_FLASH_CS_PORT,
        .pin = CFG_GPIO_SPI1_FLASH_CS_PIN,
        .active_high = false
};
Pin_cfg PERIPH_SCREEN = {
        .port = CFG_GPIO_SPI1_DISPLAY_CS_PORT,
        .pin = CFG_GPIO_SPI1_DISPLAY_CS_PIN,
        .active_high = false
};


/**
 * Enables a peripheral on the spi bus
 */
int periph_enable(Pin_cfg *cs){
        if(!cs->active_high)
        {
                hw_gpio_set_inactive(cs->port, cs->pin);
        }else
        {
                hw_gpio_set_active(cs->port, cs->pin);
        }
        return 0;
}
/**
 * disables a peripheral on the spi bus
 */
void periph_disable(Pin_cfg *cs){
        if(cs->active_high)
        {
                hw_gpio_set_inactive(cs->port, cs->pin);
        }else
        {
                hw_gpio_set_active(cs->port, cs->pin);
        }
        return;
}

void periph_toggle(Pin_cfg *cs){
        return;
}
static const gpio_config gpio_cfg[] = {
        //SPI1
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI1_CLK_PORT,CFG_GPIO_SPI1_CLK_PIN,    OUTPUT,       SPI2_CLK,   true),
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI1_DO_PORT, CFG_GPIO_SPI1_DO_PIN,     OUTPUT,       SPI2_DO,    true),
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI1_DI_PORT, CFG_GPIO_SPI1_DI_PIN,     INPUT,        SPI2_DI,    true),
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI1_FLASH_CS_PORT, CFG_GPIO_SPI1_FLASH_CS_PIN,     OUTPUT,       GPIO,      true),
#ifdef PERIPH_18_ENABLE
        HW_GPIO_PINCONFIG(CFG_GPIO_PERIPH_POWER_PORT, CFG_GPIO_PERIPH_POWER_PIN,     OUTPUT,       GPIO,      false),
#endif

#ifdef SPI_LOGIC_CUT
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI_LOGIC_PORT, CFG_GPIO_SPI_LOGIC_PIN,     OUTPUT,       GPIO,      false),

#endif
        //DISPLAY
        HW_GPIO_PINCONFIG(CFG_GPIO_SPI1_DISPLAY_CS_PORT, CFG_GPIO_SPI1_DISPLAY_CS_PIN,     OUTPUT,       GPIO,      true),

        HW_GPIO_PINCONFIG(CFG_GPIO_DISPLAY_POWER_PORT, CFG_GPIO_DISPLAY_POWER_PIN,     OUTPUT,       GPIO,      false),
        HW_GPIO_PINCONFIG(CFG_GPIO_DISPLAY_BS0_PORT, CFG_GPIO_DISPLAY_BS0_PIN,     OUTPUT,       GPIO,      false),
        HW_GPIO_PINCONFIG(CFG_GPIO_DISPLAY_DNC_PORT, CFG_GPIO_DISPLAY_DNC_PIN,     OUTPUT,       GPIO,      false),
        HW_GPIO_PINCONFIG(CFG_GPIO_DISPLAY_RST_PORT, CFG_GPIO_DISPLAY_RST_PIN,     OUTPUT,       GPIO,      false),

        HW_GPIO_PINCONFIG(CFG_GPIO_FAKE_FLASH_CS_PORT, CFG_GPIO_FAKE_FLASH_CS_PIN,     OUTPUT,       GPIO,      true),

        HW_GPIO_PINCONFIG_END
};

void periph_setup(){
        /*
         * In most cases application will configure a lot of pins, e.g. during initialization. In
         * such case it's usually convenient to use some predefined configuration of pins. This can
         * be described using array of \p gpio_config structures where each element describes single
         * pin configuration and it can be easily created using \p HW_GPIO_PINCONFIG macro. Since
         * array can have variable number of elements it should be terminated by special entry
         * which can be inserted using \p HW_GPIO_PINCONFIG_END macro. See \p gpio_cfg definition
         * above for an example.
         */
        hw_gpio_configure(gpio_cfg);
#ifdef PERIPH_18_ENABLE
        hw_gpio_set_active(CFG_GPIO_PERIPH_POWER_PORT,CFG_GPIO_PERIPH_POWER_PIN);
#endif


#ifdef SPI_LOGIC_CUT
        hw_gpio_set_inactive(CFG_GPIO_SPI_LOGIC_PORT,CFG_GPIO_SPI_LOGIC_PIN);
#endif

#if dg_configUART_ADAPTER && dg_configUSE_CONSOLE
        hw_gpio_set_pin_function(HW_GPIO_PORT_1, HW_GPIO_PIN_3, HW_GPIO_MODE_OUTPUT,
                                                                               HW_GPIO_FUNC_UART2_TX);
                       hw_gpio_set_pin_function(HW_GPIO_PORT_2, HW_GPIO_PIN_3, HW_GPIO_MODE_OUTPUT,
                                                                               HW_GPIO_FUNC_UART2_RX);
                       /* Configure UART CTS gpio port and pin */
                      // hw_gpio_configure_pin(HW_GPIO_PORT_1, HW_GPIO_PIN_6, HW_GPIO_MODE_INPUT_PULLUP,HW_GPIO_FUNC_UART2_CTSN, 1);
#endif
}


