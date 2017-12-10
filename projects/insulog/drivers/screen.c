/*
 * screen.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */
#include "screen.h"
#include "fonts/font.h"
#include "fonts/miriam_8pt.h"
#include "fonts/ms_sansserif_8pt.h"
#define Font microsoftSansSerif_8ptFontInfo //miriam_8ptFontInfo

int Screen_drawStringFor(const FONT_INFO *font, const char* string,uint8_t x,uint8_t y){
        int sLen = strlen(string);
               int bLen;
               const uint8_t *buffer;
               int pos;
               FONT_CHAR_INFO cInfo;
               for(int i =0;i<sLen;i++){
                       if(string[i] == ' '){
                               Screen_fillColor(x,y,font->space_width,font->height,0);
                               x+=font->space_width;
                       }else{
                               pos = string[i] - font->start;
                               cInfo = font->descriptors[pos];
                               buffer = &font->chars[cInfo.offset];
                               bLen = font->descriptors[pos+1].offset - cInfo.offset;

                               Screen_drawChar(buffer,bLen,x,y,cInfo.width,cInfo.height);
                               Screen_fillColor(x+cInfo.width,y,1,font->height,0);
                               x+= cInfo.width+1;
                       }
               }
               return x;
}

int Screen_drawString(const char* string,uint8_t x,uint8_t y){
       return Screen_drawStringFor(&Font,string,x,y);
}



