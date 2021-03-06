/*
 * ScreenFont.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#include "miriam_8pt.h"
#include <string.h>
/*
**  Font data for Miriam 8pt
*/

/* Character bitmaps for Miriam 8pt */
const uint8_t miriam_8ptBitmaps[] =
{
        /* @0 '!' (1 pixels wide) */
        0x00, //
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x80, // #
        0x00, //
        0x00, //

        /* @10 '"' (3 pixels wide) */
        0x00, //
        0x00, //
        0xA0, // # #
        0xA0, // # #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @20 '#' (7 pixels wide) */
        0x00, //
        0x14, //    # #
        0x14, //    # #
        0xFE, // #######
        0x28, //   # #
        0xFE, // #######
        0x50, //  # #
        0x50, //  # #
        0x00, //
        0x00, //

        /* @30 '$' (6 pixels wide) */
        0x00, //
        0x10, //    #
        0x38, //   ###
        0x54, //  # # #
        0x38, //   ###
        0x14, //    # #
        0x94, // #  # #
        0x78, //  ####
        0x10, //    #
        0x00, //

        /* @40 '%' (6 pixels wide) */
        0x00, //
        0x08, //     #
        0xF0, // ####
        0xB0, // # ##
        0xE0, // ###
        0x3C, //   ####
        0x54, //  # # #
        0x5C, //  # ###
        0x00, //
        0x00, //

        /* @50 '&' (7 pixels wide) */
        0x00, //
        0x00, //
        0x30, //   ##
        0x48, //  #  #
        0x36, //   ## ##
        0xD4, // ## # #
        0x88, // #   #
        0x76, //  ### ##
        0x00, //
        0x00, //

        /* @60 ''' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @70 '(' (2 pixels wide) */
        0x00, //
        0x00, //
        0x40, //  #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x40, //  #
        0x00, //

        /* @80 ')' (2 pixels wide) */
        0x00, //
        0x00, //
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x00, //

        /* @90 '*' (5 pixels wide) */
        0x20, //   #
        0xA8, // # # #
        0x70, //  ###
        0xA8, // # # #
        0x20, //   #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @100 '+' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x20, //   #
        0x20, //   #
        0xF8, // #####
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @110 ',' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x40, //  #
        0x80, // #
        0x00, //
        0x00, //

        /* @120 '-' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xC0, // ##
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @130 '.' (1 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x00, //
        0x00, //

        /* @140 '/' (4 pixels wide) */
        0x00, //
        0x10, //    #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x80, // #

        /* @150 '0' (4 pixels wide) */
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @160 '1' (2 pixels wide) */
        0x00, //
        0x00, //
        0x40, //  #
        0xC0, // ##
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x00, //
        0x00, //

        /* @170 '2' (4 pixels wide) */
        0x00, //
        0x00, //
        0x70, //  ###
        0x90, // #  #
        0x10, //    #
        0x60, //  ##
        0x80, // #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @180 '3' (4 pixels wide) */
        0x00, //
        0x00, //
        0x70, //  ###
        0x10, //    #
        0x20, //   #
        0x10, //    #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @190 '4' (5 pixels wide) */
        0x00, //
        0x00, //
        0x30, //   ##
        0x50, //  # #
        0x90, // #  #
        0xF8, // #####
        0x10, //    #
        0x10, //    #
        0x00, //
        0x00, //

        /* @200 '5' (4 pixels wide) */
        0x00, //
        0x00, //
        0x70, //  ###
        0x40, //  #
        0x60, //  ##
        0x10, //    #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @210 '6' (4 pixels wide) */
        0x00, //
        0x00, //
        0x60, //  ##
        0x80, // #
        0xE0, // ###
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @220 '7' (4 pixels wide) */
        0x00, //
        0x00, //
        0xF0, // ####
        0x10, //    #
        0x20, //   #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x00, //
        0x00, //

        /* @230 '8' (4 pixels wide) */
        0x00, //
        0x00, //
        0xF0, // ####
        0x90, // #  #
        0x60, //  ##
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @240 '9' (4 pixels wide) */
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0x90, // #  #
        0x70, //  ###
        0x20, //   #
        0xC0, // ##
        0x00, //
        0x00, //

        /* @250 ':' (1 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x00, //
        0x00, //

        /* @260 ';' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x40, //  #
        0x00, //
        0x00, //
        0x40, //  #
        0x80, // #
        0x00, //

        /* @270 '<' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x08, //     #
        0x30, //   ##
        0xC0, // ##
        0x20, //   #
        0x18, //    ##
        0x00, //
        0x00, //

        /* @280 '=' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xF8, // #####
        0x00, //
        0xF8, // #####
        0x00, //
        0x00, //
        0x00, //

        /* @290 '>' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x60, //  ##
        0x18, //    ##
        0x30, //   ##
        0xC0, // ##
        0x00, //
        0x00, //

        /* @300 '?' (3 pixels wide) */
        0x00, //
        0x60, //  ##
        0xA0, // # #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x00, //
        0x40, //  #
        0x00, //
        0x00, //

        /* @310 '@' (10 pixels wide) */
        0x00, 0x00, //
        0x1F, 0x00, //    #####
        0x60, 0x80, //  ##     #
        0x5D, 0x40, //  # ### # #
        0xB2, 0x40, // # ##  #  #
        0xA2, 0x40, // # #   #  #
        0xA6, 0x80, // # #  ## #
        0xDB, 0x40, // ## ## ## #
        0x60, 0x80, //  ##     #
        0x1F, 0x00, //    #####

        /* @330 'A' (7 pixels wide) */
        0x00, //
        0x10, //    #
        0x28, //   # #
        0x28, //   # #
        0x44, //  #   #
        0x7C, //  #####
        0x44, //  #   #
        0x82, // #     #
        0x00, //
        0x00, //

        /* @340 'B' (5 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @350 'C' (5 pixels wide) */
        0x00, //
        0x30, //   ##
        0x48, //  #  #
        0x80, // #
        0x80, // #
        0x80, // #
        0x48, //  #  #
        0x30, //   ##
        0x00, //
        0x00, //

        /* @360 'D' (5 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @370 'E' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x80, // #
        0x80, // #
        0xF8, // #####
        0x00, //
        0x00, //

        /* @380 'F' (4 pixels wide) */
        0x00, //
        0xF0, // ####
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @390 'G' (6 pixels wide) */
        0x00, //
        0x38, //   ###
        0x44, //  #   #
        0x80, // #
        0x9C, // #  ###
        0x84, // #    #
        0xC4, // ##   #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @400 'H' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF8, // #####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @410 'I' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @420 'J' (4 pixels wide) */
        0x00, //
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @430 'K' (6 pixels wide) */
        0x00, //
        0x88, // #   #
        0x90, // #  #
        0xA0, // # #
        0xE0, // ###
        0x90, // #  #
        0x88, // #   #
        0x84, // #    #
        0x00, //
        0x00, //

        /* @440 'L' (4 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @450 'M' (7 pixels wide) */
        0x00, //
        0x82, // #     #
        0xC6, // ##   ##
        0xC6, // ##   ##
        0xCA, // ##  # #
        0xAA, // # # # #
        0xAA, // # # # #
        0x92, // #  #  #
        0x00, //
        0x00, //

        /* @460 'N' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0xC8, // ##  #
        0xC8, // ##  #
        0xA8, // # # #
        0xA8, // # # #
        0x98, // #  ##
        0x88, // #   #
        0x00, //
        0x00, //

        /* @470 'O' (6 pixels wide) */
        0x00, //
        0x30, //   ##
        0x48, //  #  #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x48, //  #  #
        0x30, //   ##
        0x00, //
        0x00, //

        /* @480 'P' (5 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @490 'Q' (6 pixels wide) */
        0x00, //
        0x30, //   ##
        0x48, //  #  #
        0x84, // #    #
        0x84, // #    #
        0x94, // #  # #
        0x48, //  #  #
        0x34, //   ## #
        0x00, //
        0x00, //

        /* @500 'R' (6 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x90, // #  #
        0x88, // #   #
        0x84, // #    #
        0x00, //
        0x00, //

        /* @510 'S' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x80, // #
        0x70, //  ###
        0x08, //     #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @520 'T' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @530 'U' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @540 'V' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @550 'W' (9 pixels wide) */
        0x00, 0x00, //
        0x88, 0x80, // #   #   #
        0x98, 0x80, // #  ##   #
        0x55, 0x00, //  # # # #
        0x55, 0x00, //  # # # #
        0x55, 0x00, //  # # # #
        0x22, 0x00, //   #   #
        0x22, 0x00, //   #   #
        0x00, 0x00, //
        0x00, 0x00, //

        /* @570 'X' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x50, //  # #
        0x50, //  # #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @580 'Y' (5 pixels wide) */
        0x00, //
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @590 'Z' (4 pixels wide) */
        0x00, //
        0xF0, // ####
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @600 '[' (2 pixels wide) */
        0x00, //
        0x00, //
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0xC0, // ##
        0x00, //

        /* @610 '\' (3 pixels wide) */
        0x00, //
        0x00, //
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @620 ']' (2 pixels wide) */
        0x00, //
        0x00, //
        0xC0, // ##
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0xC0, // ##
        0x00, //

        /* @630 '^' (5 pixels wide) */
        0x00, //
        0x00, //
        0x20, //   #
        0x50, //  # #
        0x50, //  # #
        0x88, // #   #
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @640 '_' (6 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xFC, // ######

        /* @650 '`' (2 pixels wide) */
        0x80, // #
        0x40, //  #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @660 'a' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xE0, // ###
        0x10, //    #
        0xF0, // ####
        0x90, // #  #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @670 'b' (4 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0xE0, // ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0xE0, // ###
        0x00, //
        0x00, //

        /* @680 'c' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0x80, // #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @690 'd' (4 pixels wide) */
        0x00, //
        0x10, //    #
        0x10, //    #
        0x70, //  ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @700 'e' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0xF0, // ####
        0x80, // #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @710 'f' (3 pixels wide) */
        0x00, //
        0x60, //  ##
        0x40, //  #
        0xE0, // ###
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x00, //
        0x00, //

        /* @720 'g' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x70, //  ###
        0x90, // #  #
        0x60, //  ##

        /* @730 'h' (4 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0xE0, // ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x00, //
        0x00, //

        /* @740 'i' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @750 'j' (2 pixels wide) */
        0x00, //
        0x40, //  #
        0x00, //
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #

        /* @760 'k' (4 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0xA0, // # #
        0xC0, // ##
        0xC0, // ##
        0xA0, // # #
        0x90, // #  #
        0x00, //
        0x00, //

        /* @770 'l' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @780 'm' (7 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xAC, // # # ##
        0xD2, // ## #  #
        0x92, // #  #  #
        0x92, // #  #  #
        0x92, // #  #  #
        0x00, //
        0x00, //

        /* @790 'n' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xE0, // ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x00, //
        0x00, //

        /* @800 'o' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @810 'p' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xE0, // ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0xE0, // ###
        0x80, // #
        0x80, // #

        /* @820 'q' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x70, //  ###
        0x10, //    #
        0x10, //    #

        /* @830 'r' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @840 's' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x80, // #
        0x60, //  ##
        0x10, //    #
        0xE0, // ###
        0x00, //
        0x00, //

        /* @850 't' (3 pixels wide) */
        0x00, //
        0x40, //  #
        0x40, //  #
        0xE0, // ###
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x00, //
        0x00, //

        /* @860 'u' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @870 'v' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x00, //
        0x00, //

        /* @880 'w' (7 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x92, // #  #  #
        0xAA, // # # # #
        0xAA, // # # # #
        0xAC, // # # ##
        0x44, //  #   #
        0x00, //
        0x00, //

        /* @890 'x' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x88, // #   #
        0x50, //  # #
        0x20, //   #
        0x50, //  # #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @900 'y' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x20, //   #
        0xC0, // ##

        /* @910 'z' (3 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0xE0, // ###
        0x20, //   #
        0x40, //  #
        0x80, // #
        0xE0, // ###
        0x00, //
        0x00, //

        /* @920 '{' (3 pixels wide) */
        0x60, //  ##
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #

        /* @930 '|' (1 pixels wide) */
        0x00, //
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @940 '}' (3 pixels wide) */
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #

        /* @950 '~' (6 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x64, //  ##  #
        0x98, // #  ##
        0x00, //
        0x00, //
        0x00, //
        0x00, //
};

/* Character descriptors for Miriam 8pt */
/* { [Char width in bits], [Char height in bits], [Offset into miriam_8ptCharBitmaps in bytes] } */
const FONT_CHAR_INFO miriam_8ptDescriptors[] =
{
        {1, 10, 0},             /* ! */
        {3, 10, 10},            /* " */
        {7, 10, 20},            /* # */
        {6, 10, 30},            /* $ */
        {6, 10, 40},            /* % */
        {7, 10, 50},            /* & */
        {1, 10, 60},            /* ' */
        {2, 10, 70},            /* ( */
        {2, 10, 80},            /* ) */
        {5, 10, 90},            /* * */
        {5, 10, 100},           /* + */
        {2, 10, 110},           /* , */
        {2, 10, 120},           /* - */
        {1, 10, 130},           /* . */
        {4, 10, 140},           /* / */
        {4, 10, 150},           /* 0 */
        {2, 10, 160},           /* 1 */
        {4, 10, 170},           /* 2 */
        {4, 10, 180},           /* 3 */
        {5, 10, 190},           /* 4 */
        {4, 10, 200},           /* 5 */
        {4, 10, 210},           /* 6 */
        {4, 10, 220},           /* 7 */
        {4, 10, 230},           /* 8 */
        {4, 10, 240},           /* 9 */
        {1, 10, 250},           /* : */
        {2, 10, 260},           /* ; */
        {5, 10, 270},           /* < */
        {5, 10, 280},           /* = */
        {5, 10, 290},           /* > */
        {3, 10, 300},           /* ? */
        {10, 10, 310},          /* @ */
        {7, 10, 330},           /* A */
        {5, 10, 340},           /* B */
        {5, 10, 350},           /* C */
        {5, 10, 360},           /* D */
        {5, 10, 370},           /* E */
        {4, 10, 380},           /* F */
        {6, 10, 390},           /* G */
        {5, 10, 400},           /* H */
        {1, 10, 410},           /* I */
        {4, 10, 420},           /* J */
        {6, 10, 430},           /* K */
        {4, 10, 440},           /* L */
        {7, 10, 450},           /* M */
        {5, 10, 460},           /* N */
        {6, 10, 470},           /* O */
        {5, 10, 480},           /* P */
        {6, 10, 490},           /* Q */
        {6, 10, 500},           /* R */
        {5, 10, 510},           /* S */
        {5, 10, 520},           /* T */
        {5, 10, 530},           /* U */
        {5, 10, 540},           /* V */
        {9, 10, 550},           /* W */
        {5, 10, 570},           /* X */
        {5, 10, 580},           /* Y */
        {4, 10, 590},           /* Z */
        {2, 10, 600},           /* [ */
        {3, 10, 610},           /* \ */
        {2, 10, 620},           /* ] */
        {5, 10, 630},           /* ^ */
        {6, 10, 640},           /* _ */
        {2, 10, 650},           /* ` */
        {4, 10, 660},           /* a */
        {4, 10, 670},           /* b */
        {4, 10, 680},           /* c */
        {4, 10, 690},           /* d */
        {4, 10, 700},           /* e */
        {3, 10, 710},           /* f */
        {4, 10, 720},           /* g */
        {4, 10, 730},           /* h */
        {1, 10, 740},           /* i */
        {2, 10, 750},           /* j */
        {4, 10, 760},           /* k */
        {1, 10, 770},           /* l */
        {7, 10, 780},           /* m */
        {4, 10, 790},           /* n */
        {4, 10, 800},           /* o */
        {4, 10, 810},           /* p */
        {4, 10, 820},           /* q */
        {2, 10, 830},           /* r */
        {4, 10, 840},           /* s */
        {3, 10, 850},           /* t */
        {4, 10, 860},           /* u */
        {5, 10, 870},           /* v */
        {7, 10, 880},           /* w */
        {5, 10, 890},           /* x */
        {5, 10, 900},           /* y */
        {3, 10, 910},           /* z */
        {3, 10, 920},           /* { */
        {1, 10, 930},           /* | */
        {3, 10, 940},           /* } */
        {6, 10, 950},           /* ~ */
        {0,0,960}
};

/* Font information for Miriam 8pt */
const FONT_INFO miriam_8ptFontInfo =
{
        10, /*  Character height */
        '!', /*  Start character */
        '~', /*  End character */
        2, /*  Width, in pixels, of space character */
        miriam_8ptDescriptors, /*  Character descriptor array */
        miriam_8ptBitmaps, /*  Character bitmap array */
};



