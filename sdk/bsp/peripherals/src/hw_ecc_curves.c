/**
 * \addtogroup BSP
 * \{
 * \addtogroup DEVICES
 * \{
 * \addtogroup ECC_CURVES
 * \{
 * \brief ECC curves
 */

/**
 *****************************************************************************************
 *
 * @file hw_ecc_curves.c
 *
 * @brief ECC Engine curves parameters.
 *
 * Copyright (C) 2016. Dialog Semiconductor, unpublished work. This computer
 * program includes Confidential, Proprietary Information and is a Trade Secret of
 * Dialog Semiconductor. All use, disclosure, and/or reproduction is prohibited
 * unless authorized in writing. All Rights Reserved.
 *
 * <black.orca.support@diasemi.com> and contributors.
 *
 *****************************************************************************************
 */

#if dg_configUSE_HW_ECC

#include <stdint.h>

/* PRIME FIELD CURVES */


/* P-192 */
const uint8_t hw_ecc_p192_q[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
const uint8_t hw_ecc_p192_n[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0xDE, 0xF8, 0x36, 0x14, 0x6B, 0xC9, 0xB1, 0xB4, 0xD2, 0x28, 0x31
};
const uint8_t hw_ecc_p192_Gx[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x8D, 0xA8, 0x0E, 0xB0, 0x30, 0x90, 0xF6,
        0x7C, 0xBF, 0x20, 0xEB, 0x43, 0xA1, 0x88, 0x00, 0xF4, 0xFF, 0x0A, 0xFD, 0x82, 0xFF, 0x10, 0x12
};
const uint8_t hw_ecc_p192_Gy[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x19, 0x2b, 0x95, 0xff, 0xc8, 0xda, 0x78,
        0x63, 0x10, 0x11, 0xed, 0x6b, 0x24, 0xcd, 0xd5, 0x73, 0xf9, 0x77, 0xa1, 0x1e, 0x79, 0x48, 0x11
};
const uint8_t hw_ecc_p192_a[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};
const uint8_t hw_ecc_p192_b[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x21, 0x05, 0x19, 0xE5, 0x9C, 0x80, 0xE7,
        0x0F, 0xA7, 0xE9, 0xAB, 0x72, 0x24, 0x30, 0x49, 0xFE, 0xB8, 0xDE, 0xEC, 0xC1, 0x46, 0xB9, 0xB1
};


/* P-224 */
const uint8_t hw_ecc_p224_q[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
};
const uint8_t hw_ecc_p224_n[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x16, 0xA2, 0xE0, 0xB8, 0xF0, 0x3E, 0x13, 0xDD, 0x29, 0x45, 0x5C, 0x5C, 0x2A, 0x3D
};
const uint8_t hw_ecc_p224_Gx[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xB7, 0x0E, 0x0C, 0xBD, 0x6B, 0xB4, 0xBF, 0x7F, 0x32, 0x13, 0x90, 0xB9,
        0x4A, 0x03, 0xC1, 0xD3, 0x56, 0xC2, 0x11, 0x22, 0x34, 0x32, 0x80, 0xD6, 0x11, 0x5C, 0x1D, 0x21
};
const uint8_t hw_ecc_p224_Gy[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xbd, 0x37, 0x63, 0x88, 0xb5, 0xf7, 0x23, 0xfb, 0x4c, 0x22, 0xdf, 0xe6,
        0xcd, 0x43, 0x75, 0xa0, 0x5a, 0x07, 0x47, 0x64, 0x44, 0xd5, 0x81, 0x99, 0x85, 0x00, 0x7e, 0x34
};
const uint8_t hw_ecc_p224_a[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE
};
const uint8_t hw_ecc_p224_b[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0xB4, 0x05, 0x0A, 0x85, 0x0C, 0x04, 0xB3, 0xAB, 0xF5, 0x41, 0x32, 0x56,
        0x50, 0x44, 0xB0, 0xB7, 0xD7, 0xBF, 0xD8, 0xBA, 0x27, 0x0B, 0x39, 0x43, 0x23, 0x55, 0xFF, 0xB4
};


/* P-256 */
const uint8_t hw_ecc_p256_q[32] __attribute__((aligned(0x40))) = {
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
const uint8_t hw_ecc_p256_n[32] __attribute__((aligned(0x40))) = {
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xbc, 0xe6, 0xfa, 0xad, 0xa7, 0x17, 0x9e, 0x84, 0xf3, 0xb9, 0xca, 0xc2, 0xfc, 0x63, 0x25, 0x51
};
const uint8_t hw_ecc_p256_Gx[32] __attribute__((aligned(0x40))) = {
        0x6b, 0x17, 0xd1, 0xf2, 0xe1, 0x2c, 0x42, 0x47, 0xf8, 0xbc, 0xe6, 0xe5, 0x63, 0xa4, 0x40, 0xf2,
        0x77, 0x03, 0x7d, 0x81, 0x2d, 0xeb, 0x33, 0xa0, 0xf4, 0xa1, 0x39, 0x45, 0xd8, 0x98, 0xc2, 0x96
};
const uint8_t hw_ecc_p256_Gy[32] __attribute__((aligned(0x40))) = {
        0x4f, 0xe3, 0x42, 0xe2, 0xfe, 0x1a, 0x7f, 0x9b, 0x8e, 0xe7, 0xeb, 0x4a, 0x7c, 0x0f, 0x9e, 0x16,
        0x2b, 0xce, 0x33, 0x57, 0x6b, 0x31, 0x5e, 0xce, 0xcb, 0xb6, 0x40, 0x68, 0x37, 0xbf, 0x51, 0xf5
};
const uint8_t hw_ecc_p256_a[32] __attribute__((aligned(0x40))) = {
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc
};
const uint8_t hw_ecc_p256_b[32] __attribute__((aligned(0x40))) = {
        0x5a, 0xc6, 0x35, 0xd8, 0xaa, 0x3a, 0x93, 0xe7, 0xb3, 0xeb, 0xbd, 0x55, 0x76, 0x98, 0x86, 0xbc,
        0x65, 0x1d, 0x06, 0xb0, 0xcc, 0x53, 0xb0, 0xf6, 0x3b, 0xce, 0x3c, 0x3e, 0x27, 0xd2, 0x60, 0x4b
};


/* Curve 25519 */
const uint8_t hw_ecc_curve25519_p[32] __attribute__((aligned(0x40))) = {
        0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F
};
const uint8_t hw_ecc_curve25519_a24[32] __attribute__((aligned(0x40))) = { /* This is (a - 2)/4 */
        0x41, 0xDB, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const uint8_t hw_ecc_curve25519_G[32] __attribute__((aligned(0x40))) = {
        0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


/* BINARY FIELD CURVES */


/* B-233 */
const uint8_t hw_ecc_b233_q[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
};
const uint8_t hw_ecc_b233_n[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x13, 0xE9, 0x74, 0xE7, 0x2F, 0x8A, 0x69, 0x22, 0x03, 0x1D, 0x26, 0x03, 0xCF, 0xE0, 0xD7
};
const uint8_t hw_ecc_b233_Gx[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0xFA, 0xC9, 0xDF, 0xCB, 0xAC, 0x83, 0x13, 0xBB, 0x21, 0x39, 0xF1, 0xBB, 0x75,
        0x5F, 0xEF, 0x65, 0xBC, 0x39, 0x1F, 0x8B, 0x36, 0xF8, 0xF8, 0xEB, 0x73, 0x71, 0xFD, 0x55, 0x8B
};
const uint8_t hw_ecc_b233_Gy[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x01, 0x00, 0x6A, 0x08, 0xA4, 0x19, 0x03, 0x35, 0x06, 0x78, 0xE5, 0x85, 0x28, 0xBE,
        0xBF, 0x8A, 0x0B, 0xEF, 0xF8, 0x67, 0xA7, 0xCA, 0x36, 0x71, 0x6F, 0x7E, 0x01, 0xF8, 0x10, 0x52
};
const uint8_t hw_ecc_b233_a[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
const uint8_t hw_ecc_b233_b[32] __attribute__((aligned(0x40))) = {
        0x00, 0x00, 0x00, 0x66, 0x64, 0x7E, 0xDE, 0x6C, 0x33, 0x2C, 0x7F, 0x8C, 0x09, 0x23, 0xBB, 0x58,
        0x21, 0x3B, 0x33, 0x3B, 0x20, 0xE9, 0xCE, 0x42, 0x81, 0xFE, 0x11, 0x5F, 0x7D, 0x8F, 0x90, 0xAD
};

#endif /* dg_configUSE_HW_ECC */

/**
 * \}
 * \}
 * \}
 */

