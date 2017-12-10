/*
 * screen.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include "common.h"
#include "fonts/font.h"
#define BUFFER_LINES 16
#define ROW_SIZE 16
#define LINE_COUNT 128
extern uint16_t ref_frame[LINE_COUNT*BUFFER_LINES];


/**
 * Toggles the display on/off
 * on - TRUE if the screen should be switched on, FALSE if it is to be switched off
 * Returns 0 on success
 */
int Screen_toggle(bool on);


/**
 * Clears the lcd display and sets all to white (off)
 */
void clearLCD();

void Screen_init();
void Screen_deinit();

void Screen_setContrastLevel(float level);

int Screen_fillColor(uint16_t x, uint16_t y, uint16_t w, uint16_t h,uint16_t color);

int Screen_write(uint16_t x, uint16_t y, uint16_t w, uint16_t h,uint8_t *buffer);

int Screen_drawString(const char* string,uint8_t x,uint8_t y);

int Screen_drawStringFor(const FONT_INFO *font, const char* string,uint8_t x,uint8_t y);

void Screen_drawChar(const uint8_t *buffer,size_t len,uint8_t x,uint8_t y, uint8_t width,uint8_t height);


#endif /* SCREEN_H_ */
