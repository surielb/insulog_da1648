/*
 * ssd1351.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef SSD1351_H_
#define SSD1351_H_


//#define FULL_FRAME
#define SSD1351WIDTH 128
#define SSD1351HEIGHT 128  // SET THIS TO 96 FOR 1.27"!

#define swap(a, b) { uint16_t t = a; a = b; b = t; }

// Select one of these defines to set the pixel color order
#define SSD1351_COLORORDER_RGB
// #define SSD1351_COLORORDER_BGR

#if defined SSD1351_COLORORDER_RGB && defined SSD1351_COLORORDER_BGR
  #error "RGB and BGR can not both be defined for SSD1351_COLORODER."
#endif

// Timing Delays
#define SSD1351_DELAYS_HWFILL       (3)
#define SSD1351_DELAYS_HWLINE       (1)

// SSD1351 Commands
#define SSD1351_CMD_SETCOLUMN           0x15
#define SSD1351_CMD_SETROW              0x75
#define SSD1351_CMD_WRITERAM            0x5C
#define SSD1351_CMD_READRAM             0x5D
#define SSD1351_CMD_SETREMAP            0xA0
#define SSD1351_CMD_STARTLINE           0xA1
#define SSD1351_CMD_DISPLAYOFFSET       0xA2
#define SSD1351_CMD_DISPLAYALLOFF       0xA4
#define SSD1351_CMD_DISPLAYALLON        0xA5
#define SSD1351_CMD_NORMALDISPLAY       0xA6
#define SSD1351_CMD_INVERTDISPLAY       0xA7
#define SSD1351_CMD_FUNCTIONSELECT      0xAB
#define SSD1351_CMD_DISPLAYOFF          0xAE
#define SSD1351_CMD_DISPLAYON           0xAF
#define SSSD1351_CMD_SETPHASELENGTH             0xB1
#define SSD1351_CMD_DISPLAYENHANCE      0xB2
#define SSD1351_CMD_CLOCKDIV            0xB3
#define SSD1351_CMD_SETVSL              0xB4
#define SSD1351_CMD_SETGPIO             0xB5
#define SSD1351_CMD_PRECHARGE2          0xB6
#define SSD1351_CMD_SETGRAY             0xB8
#define SSD1351_CMD_USELUT              0xB9
#define SSD1351_CMD_PRECHARGELEVEL      0xBB
#define SSD1351_CMD_VCOMH               0xBE
#define SSD1351_CMD_CONTRASTABC         0xC1
#define SSD1351_CMD_CONTRASTMASTER      0xC7
#define SSD1351_CMD_MUXRATIO            0xCA
#define SSD1351_CMD_COMMANDLOCK         0xFD
#define SSD1351_CMD_HORIZSCROLL         0x96
#define SSD1351_CMD_STOPSCROLL          0x9E
#define SSD1351_CMD_STARTSCROLL         0x9F

#define SSD1351_REMAP_VERTICAL_INC 0x01
#define SSD1351_REMAP_COLUMN_127 1<<1
#define SSD1351_REMAP_COLOR_BGR 1<<2
#define SSD1351_REMAP_SCAN_DOWN 1<<4
#define SSD1351_REMAP_SPLIT_ODDEVEN 1<<5


int fill_pixels(uint16_t x, uint16_t y, uint16_t w, uint16_t h,void *data,size_t len);


#endif /* SSD1351_H_ */
