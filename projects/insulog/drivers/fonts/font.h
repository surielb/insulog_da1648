/*
 * font.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef FONTS_FONT_H_
#define FONTS_FONT_H_

#include "common.h"

typedef struct  {
        uint8_t width;
        uint8_t height;
        uint16_t offset;
}FONT_CHAR_INFO;

typedef struct {
   uint8_t height;
   char start;
   char end;
   uint8_t space_width;
   const FONT_CHAR_INFO *descriptors;
   const uint8_t     *chars;

}FONT_INFO;

#endif /* FONTS_FONT_H_ */
