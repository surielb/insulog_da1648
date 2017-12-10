/*
 * ms_sansserif_8pt.c
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */
#include "ms_sansserif_8pt.h"
/*
**  Font data for Microsoft Sans Serif 8pt
*/

/* Character bitmaps for Microsoft Sans Serif 8pt */
const uint8_t microsoftSansSerif_8ptBitmaps[] =
{
        /* @0 '!' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x80, // #
        0x00, //
        0x00, //

        /* @12 '"' (4 pixels wide) */
        0x00, //
        0x90, // #  #
        0x90, // #  #
        0x90, // #  #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @24 '#' (6 pixels wide) */
        0x00, //
        0x20, //   #
        0x30, //   ##
        0xA8, // # # #
        0x6C, //  ## ##
        0x30, //   ##
        0x30, //   ##
        0x68, //  ## #
        0xAC, // # # ##
        0x30, //   ##
        0x20, //   #
        0x00, //

        /* @36 '$' (5 pixels wide) */
        0x00, //
        0x20, //   #
        0x70, //  ###
        0xA8, // # # #
        0xA0, // # #
        0x60, //  ##
        0x30, //   ##
        0x28, //   # #
        0xA8, // # # #
        0x70, //  ###
        0x20, //   #
        0x00, //

        /* @48 '%' (7 pixels wide) */
        0x00, //
        0x60, //  ##
        0x92, // #  #  #
        0x64, //  ##  #
        0x08, //     #
        0x10, //    #
        0x20, //   #
        0x4C, //  #  ##
        0x92, // #  #  #
        0x0C, //     ##
        0x00, //
        0x00, //

        /* @60 '&' (5 pixels wide) */
        0x00, //
        0x40, //  #
        0xA0, // # #
        0xA0, // # #
        0x40, //  #
        0x40, //  #
        0xA8, // # # #
        0x90, // #  #
        0x90, // #  #
        0x68, //  ## #
        0x00, //
        0x00, //

        /* @72 ''' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @84 '(' (2 pixels wide) */
        0x00, //
        0x40, //  #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x40, //  #

        /* @96 ')' (2 pixels wide) */
        0x00, //
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #

        /* @108 '*' (3 pixels wide) */
        0x00, //
        0xA0, // # #
        0x40, //  #
        0xA0, // # #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @120 '+' (5 pixels wide) */
        0x00, //
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
        0x00, //

        /* @132 ',' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x40, //  #
        0x80, // #
        0x00, //

        /* @144 '-' (2 pixels wide) */
        0x00, //
        0x00, //
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

        /* @156 '.' (1 pixels wide) */
        0x00, //
        0x00, //
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

        /* @168 '/' (4 pixels wide) */
        0x00, //
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x20, //   #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @180 '0' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @192 '1' (3 pixels wide) */
        0x00, //
        0x20, //   #
        0xE0, // ###
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @204 '2' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x08, //     #
        0x08, //     #
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x80, // #
        0xF8, // #####
        0x00, //
        0x00, //

        /* @216 '3' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x08, //     #
        0x08, //     #
        0x30, //   ##
        0x08, //     #
        0x08, //     #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @228 '4' (5 pixels wide) */
        0x00, //
        0x10, //    #
        0x30, //   ##
        0x30, //   ##
        0x50, //  # #
        0x50, //  # #
        0x90, // #  #
        0xF8, // #####
        0x10, //    #
        0x10, //    #
        0x00, //
        0x00, //

        /* @240 '5' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x88, // #   #
        0x08, //     #
        0x08, //     #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @252 '6' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @264 '7' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x08, //     #
        0x10, //    #
        0x10, //    #
        0x20, //   #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x00, //
        0x00, //

        /* @276 '8' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @288 '9' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x78, //  ####
        0x08, //     #
        0x08, //     #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @300 ':' (1 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x00, //
        0x00, //

        /* @312 ';' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x40, //  #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x40, //  #
        0x80, // #
        0x00, //

        /* @324 '<' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x80, // #
        0x40, //  #
        0x20, //   #
        0x10, //    #
        0x00, //
        0x00, //

        /* @336 '=' (5 pixels wide) */
        0x00, //
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
        0x00, //

        /* @348 '>' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x80, // #
        0x40, //  #
        0x20, //   #
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x80, // #
        0x00, //
        0x00, //

        /* @360 '?' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x08, //     #
        0x08, //     #
        0x10, //    #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x20, //   #
        0x00, //
        0x00, //


        /* @372 '@' (10 pixels wide) */
        0x00, 0x00, //
        0x1E, 0x00, //    ####
        0x61, 0x80, //  ##    ##
        0x40, 0x80, //  #      #
        0x8E, 0x40, // #   ###  #
        0x92, 0x40, // #  #  #  #
        0x92, 0x40, // #  #  #  #
        0x8D, 0xC0, // #   ## ###
        0x40, 0x00, //  #
        0x60, 0x00, //  ##
        0x1F, 0x00, //    #####
        0x00, 0x00, //

        /* @396 'A' (7 pixels wide) */
        0x00, //
        0x10, //    #
        0x10, //    #
        0x28, //   # #
        0x28, //   # #
        0x44, //  #   #
        0x44, //  #   #
        0x7C, //  #####
        0x82, // #     #
        0x82, // #     #
        0x00, //
        0x00, //

        /* @408 'B' (5 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @420 'C' (6 pixels wide) */
        0x00, //
        0x78, //  ####
        0x84, // #    #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x84, // #    #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @432 'D' (6 pixels wide) */
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x88, // #   #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @444 'E' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x80, // #
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x80, // #
        0x80, // #
        0x80, // #
        0xF8, // #####
        0x00, //
        0x00, //

        /* @456 'F' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x80, // #
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @468 'G' (6 pixels wide) */
        0x00, //
        0x78, //  ####
        0x84, // #    #
        0x80, // #
        0x80, // #
        0x9C, // #  ###
        0x84, // #    #
        0x84, // #    #
        0x8C, // #   ##
        0x74, //  ### #
        0x00, //
        0x00, //

        /* @480 'H' (6 pixels wide) */
        0x00, //
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0xFC, // ######
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x00, //
        0x00, //

        /* @492 'I' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @504 'J' (4 pixels wide) */
        0x00, //
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @516 'K' (6 pixels wide) */
        0x00, //
        0x88, // #   #
        0x90, // #  #
        0xA0, // # #
        0xC0, // ##
        0xC0, // ##
        0xA0, // # #
        0x90, // #  #
        0x88, // #   #
        0x84, // #    #
        0x00, //
        0x00, //

        /* @528 'L' (5 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0xF8, // #####
        0x00, //
        0x00, //

        /* @540 'M' (7 pixels wide) */
        0x00, //
        0x82, // #     #
        0x82, // #     #
        0xC6, // ##   ##
        0xC6, // ##   ##
        0xAA, // # # # #
        0xAA, // # # # #
        0x92, // #  #  #
        0x92, // #  #  #
        0x82, // #     #
        0x00, //
        0x00, //

        /* @552 'N' (6 pixels wide) */
        0x00, //
        0x84, // #    #
        0xC4, // ##   #
        0xC4, // ##   #
        0xA4, // # #  #
        0xA4, // # #  #
        0x94, // #  # #
        0x8C, // #   ##
        0x8C, // #   ##
        0x84, // #    #
        0x00, //
        0x00, //

        /* @564 'O' (6 pixels wide) */
        0x00, //
        0x78, //  ####
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @576 'P' (6 pixels wide) */
        0x00, //
        0xF8, // #####
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0xF8, // #####
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @588 'Q' (6 pixels wide) */
        0x00, //
        0x78, //  ####
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x94, // #  # #
        0x8C, // #   ##
        0x78, //  ####
        0x04, //      #
        0x00, //

        /* @600 'R' (6 pixels wide) */
        0x00, //
        0xF8, // #####
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0xF8, // #####
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x00, //
        0x00, //

        /* @612 'S' (5 pixels wide) */
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x80, // #
        0x80, // #
        0x70, //  ###
        0x08, //     #
        0x08, //     #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @624 'T' (5 pixels wide) */
        0x00, //
        0xF8, // #####
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @636 'U' (6 pixels wide) */
        0x00, //
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x84, // #    #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @648 'V' (7 pixels wide) */
        0x00, //
        0x82, // #     #
        0x82, // #     #
        0x44, //  #   #
        0x44, //  #   #
        0x44, //  #   #
        0x28, //   # #
        0x28, //   # #
        0x10, //    #
        0x10, //    #
        0x00, //
        0x00, //

        /* @660 'W' (11 pixels wide) */
        0x00, 0x00, //
        0x80, 0x20, // #         #
        0x80, 0x20, // #         #
        0x44, 0x40, //  #   #   #
        0x44, 0x40, //  #   #   #
        0x44, 0x40, //  #   #   #
        0x2A, 0x80, //   # # # #
        0x2A, 0x80, //   # # # #
        0x11, 0x00, //    #   #
        0x11, 0x00, //    #   #
        0x00, 0x00, //
        0x00, 0x00, //

        /* @684 'X' (7 pixels wide) */
        0x00, //
        0x82, // #     #
        0x82, // #     #
        0x44, //  #   #
        0x28, //   # #
        0x10, //    #
        0x28, //   # #
        0x44, //  #   #
        0x82, // #     #
        0x82, // #     #
        0x00, //
        0x00, //

        /* @696 'Y' (7 pixels wide) */
        0x00, //
        0x82, // #     #
        0x82, // #     #
        0x44, //  #   #
        0x28, //   # #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x10, //    #
        0x00, //
        0x00, //

        /* @708 'Z' (7 pixels wide) */
        0x00, //
        0xFE, // #######
        0x02, //       #
        0x04, //      #
        0x08, //     #
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x80, // #
        0xFE, // #######
        0x00, //
        0x00, //

        /* @720 '[' (2 pixels wide) */
        0x00, //
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0xC0, // ##

        /* @732 '\' (4 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x20, //   #
        0x10, //    #
        0x10, //    #
        0x00, //
        0x00, //

        /* @744 ']' (2 pixels wide) */
        0x00, //
        0xC0, // ##
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0xC0, // ##

        /* @756 '^' (5 pixels wide) */
        0x20, //   #
        0x50, //  # #
        0x88, // #   #
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //

        /* @768 '_' (6 pixels wide) */
        0x00, //
        0x00, //
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

        /* @780 '`' (2 pixels wide) */
        0x00, //
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
        0x00, //

        /* @792 'a' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x08, //     #
        0x78, //  ####
        0x88, // #   #
        0x88, // #   #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @804 'b' (5 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @816 'c' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x80, // #
        0x80, // #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @828 'd' (5 pixels wide) */
        0x00, //
        0x08, //     #
        0x08, //     #
        0x08, //     #
        0x78, //  ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x78, //  ####
        0x00, //
        0x00, //

        /* @840 'e' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0xF8, // #####
        0x80, // #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @852 'f' (2 pixels wide) */
        0x00, //
        0x40, //  #
        0x80, // #
        0x80, // #
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @864 'g' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x78, //  ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x78, //  ####
        0x08, //     #
        0xF0, // ####

        /* @876 'h' (5 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0xB0, // # ##
        0xC8, // ##  #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @888 'i' (1 pixels wide) */
        0x00, //
        0x80, // #
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

        /* @900 'j' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x00, //
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #

        /* @912 'k' (5 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x90, // #  #
        0xA0, // # #
        0xC0, // ##
        0xA0, // # #
        0x90, // #  #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @924 'l' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @936 'm' (7 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xEC, // ### ##
        0x92, // #  #  #
        0x92, // #  #  #
        0x92, // #  #  #
        0x92, // #  #  #
        0x92, // #  #  #
        0x00, //
        0x00, //

        /* @948 'n' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xB0, // # ##
        0xC8, // ##  #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x00, //
        0x00, //

        /* @960 'o' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x70, //  ###
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x70, //  ###
        0x00, //
        0x00, //

        /* @972 'p' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xF0, // ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0xF0, // ####
        0x80, // #
        0x80, // #

        /* @984 'q' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x78, //  ####
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x78, //  ####
        0x08, //     #
        0x08, //     #

        /* @996 'r' (2 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //
        0x00, //

        /* @1008 's' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x60, //  ##
        0x90, // #  #
        0x40, //  #
        0x20, //   #
        0x90, // #  #
        0x60, //  ##
        0x00, //
        0x00, //

        /* @1020 't' (2 pixels wide) */
        0x00, //
        0x00, //
        0x80, // #
        0x80, // #
        0xC0, // ##
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x40, //  #
        0x00, //
        0x00, //

        /* @1032 'u' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x88, // #   #
        0x98, // #  ##
        0x68, //  ## #
        0x00, //
        0x00, //

        /* @1044 'v' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x88, // #   #
        0x88, // #   #
        0x50, //  # #
        0x50, //  # #
        0x20, //   #
        0x20, //   #
        0x00, //
        0x00, //

        /* @1056 'w' (7 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x92, // #  #  #
        0x92, // #  #  #
        0xAA, // # # # #
        0xAA, // # # # #
        0x44, //  #   #
        0x44, //  #   #
        0x00, //
        0x00, //

        /* @1068 'x' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x90, // #  #
        0x90, // #  #
        0x60, //  ##
        0x60, //  ##
        0x90, // #  #
        0x90, // #  #
        0x00, //
        0x00, //

        /* @1080 'y' (5 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x48, //  #  #
        0x48, //  #  #
        0x48, //  #  #
        0x48, //  #  #
        0x30, //   ##
        0x20, //   #
        0x20, //   #
        0xC0, // ##

        /* @1092 'z' (4 pixels wide) */
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0xF0, // ####
        0x10, //    #
        0x20, //   #
        0x40, //  #
        0x80, // #
        0xF0, // ####
        0x00, //
        0x00, //

        /* @1104 '{' (3 pixels wide) */
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x00, //

        /* @1116 '|' (1 pixels wide) */
        0x00, //
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x80, // #
        0x00, //

        /* @1128 '}' (3 pixels wide) */
        0x80, // #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x20, //   #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x40, //  #
        0x80, // #
        0x00, //

        /* @1140 '~' (6 pixels wide) */
        0x00, //
        0x00, //
        0x64, //  ##  #
        0x98, // #  ##
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
        0x00, //
};

/* Character descriptors for Microsoft Sans Serif 8pt */
/* { [Char width in bits], [Char height in bits], [Offset into microsoftSansSerif_8ptCharBitmaps in bytes] } */
const FONT_CHAR_INFO microsoftSansSerif_8ptDescriptors[] =
{
        {1, 12, 0},             /* ! */
        {4, 12, 12},            /* " */
        {6, 12, 24},            /* # */
        {5, 12, 36},            /* $ */
        {7, 12, 48},            /* % */
        {5, 12, 60},            /* & */
        {1, 12, 72},            /* ' */
        {2, 12, 84},            /* ( */
        {2, 12, 96},            /* ) */
        {3, 12, 108},           /* * */
        {5, 12, 120},           /* + */
        {2, 12, 132},           /* , */
        {2, 12, 144},           /* - */
        {1, 12, 156},           /* . */
        {4, 12, 168},           /* / */
        {5, 12, 180},           /* 0 */
        {3, 12, 192},           /* 1 */
        {5, 12, 204},           /* 2 */
        {5, 12, 216},           /* 3 */
        {5, 12, 228},           /* 4 */
        {5, 12, 240},           /* 5 */
        {5, 12, 252},           /* 6 */
        {5, 12, 264},           /* 7 */
        {5, 12, 276},           /* 8 */
        {5, 12, 288},           /* 9 */
        {1, 12, 300},           /* : */
        {2, 12, 312},           /* ; */
        {4, 12, 324},           /* < */
        {5, 12, 336},           /* = */
        {4, 12, 348},           /* > */
        {5, 12, 360},           /* ? */
        {10, 12, 372},          /* @ */
        {7, 12, 396},           /* A */
        {5, 12, 408},           /* B */
        {6, 12, 420},           /* C */
        {6, 12, 432},           /* D */
        {5, 12, 444},           /* E */
        {5, 12, 456},           /* F */
        {6, 12, 468},           /* G */
        {6, 12, 480},           /* H */
        {1, 12, 492},           /* I */
        {4, 12, 504},           /* J */
        {6, 12, 516},           /* K */
        {5, 12, 528},           /* L */
        {7, 12, 540},           /* M */
        {6, 12, 552},           /* N */
        {6, 12, 564},           /* O */
        {6, 12, 576},           /* P */
        {6, 12, 588},           /* Q */
        {6, 12, 600},           /* R */
        {5, 12, 612},           /* S */
        {5, 12, 624},           /* T */
        {6, 12, 636},           /* U */
        {7, 12, 648},           /* V */
        {11, 12, 660},          /* W */
        {7, 12, 684},           /* X */
        {7, 12, 696},           /* Y */
        {7, 12, 708},           /* Z */
        {2, 12, 720},           /* [ */
        {4, 12, 732},           /* \ */
        {2, 12, 744},           /* ] */
        {5, 12, 756},           /* ^ */
        {6, 12, 768},           /* _ */
        {2, 12, 780},           /* ` */
        {5, 12, 792},           /* a */
        {5, 12, 804},           /* b */
        {5, 12, 816},           /* c */
        {5, 12, 828},           /* d */
        {5, 12, 840},           /* e */
        {2, 12, 852},           /* f */
        {5, 12, 864},           /* g */
        {5, 12, 876},           /* h */
        {1, 12, 888},           /* i */
        {1, 12, 900},           /* j */
        {5, 12, 912},           /* k */
        {1, 12, 924},           /* l */
        {7, 12, 936},           /* m */
        {5, 12, 948},           /* n */
        {5, 12, 960},           /* o */
        {5, 12, 972},           /* p */
        {5, 12, 984},           /* q */
        {2, 12, 996},           /* r */
        {4, 12, 1008},          /* s */
        {2, 12, 1020},          /* t */
        {5, 12, 1032},          /* u */
        {5, 12, 1044},          /* v */
        {7, 12, 1056},          /* w */
        {4, 12, 1068},          /* x */
        {5, 12, 1080},          /* y */
        {4, 12, 1092},          /* z */
        {3, 12, 1104},          /* { */
        {1, 12, 1116},          /* | */
        {3, 12, 1128},          /* } */
        {6, 12, 1140},          /* ~ */
};

/* Font information for Microsoft Sans Serif 8pt */
const FONT_INFO microsoftSansSerif_8ptFontInfo =
{
        12, /*  Character height */
        '!', /*  Start character */
        '~', /*  End character */
        2, /*  Width, in pixels, of space character */
        microsoftSansSerif_8ptDescriptors, /*  Character descriptor array */
        microsoftSansSerif_8ptBitmaps, /*  Character bitmap array */
};

