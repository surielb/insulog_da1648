/*
 * common.h
 *
 *  Created on: Jul 4, 2017
 *      Author: hells
 */

#ifndef CONFIG_COMMON_H_
#define CONFIG_COMMON_H_

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "osal.h"



#define KB * (1024)
#define MB  * (1024 KB)

/* The following is a utility MACRO that exists to Read an unaligned */
/* Little Endian uint8_t from a specifed Memory Address.  This MACRO  */
/* accepts as it's first parameter the unaligned Memory Address of   */
/* the Little Endian uint8_t to read.  This function returns a uint8_t */
/* (in the Endian-ness of the Native Host Processor).                */
#define READ_UNALIGNED_BYTE_LITTLE_ENDIAN(_x)  (((uint8_t *)(_x))[0])

/* The following is a utility MACRO that exists to Read an unaligned */
/* Little Endian uint16_t from a specifed Memory Address.  This MACRO  */
/* accepts as it's first parameter the unaligned Memory Address of   */
/* the Little Endian uint16_t to read.  This function returns a uint16_t */
/* (in the Endian-ness of the Native Host Processor).                */
#define READ_UNALIGNED_WORD_LITTLE_ENDIAN(_x)  ((uint16_t)((((uint16_t)(((uint8_t *)(_x))[1])) << 8) | ((uint16_t)(((uint8_t *)(_x))[0]))))


/* The following is a utility MACRO that exists to Assign a          */
  /* specified Word_t to an unaligned Memory Address.  This MACRO      */
  /* accepts as it's first parameter the Memory Address to store the   */
  /* specified Little Endian Word_t into.  The second parameter is the */
  /* actual Word_t value to store into the specified Memory Location.  */
  /* * NOTE * The second parameter needs to be stored in the Endian    */
  /*          format of the Native Host's processor.                   */
#define ASSIGN_HOST_WORD_TO_LITTLE_ENDIAN_UNALIGNED_WORD(_x, _y)    \
{                                                                   \
 ((uint8_t *)(_x))[1] = ((uint8_t)(((uint16_t)(_y)) & 0xFF));          \
 ((uint8_t *)(_x))[0] = ((uint8_t)((((uint16_t)(_y)) >> 8) & 0xFF));   \
}
/* The following is a utility MACRO that exists to Read an unaligned */
/* Little Endian uint32_t from a specifed Memory Address.  This MACRO */
/* accepts as it's first parameter the unaligned Memory Address of   */
/* the Little Endian uint32_t to read.  This function returns a       */
/* uint32_t (in the Endian-ness of the Native Host Processor).        */
#define READ_UNALIGNED_DWORD_LITTLE_ENDIAN(_x)  ((uint32_t)((((uint32_t)(((uint8_t *)(_x))[3])) << 24) | (((uint32_t)(((uint8_t *)(_x))[2])) << 16) | (((uint32_t)(((uint8_t *)(_x))[1])) << 8) | ((uint32_t)(((uint8_t *)(_x))[0]))))

/* The following is a utility MACRO that exists to Read an unaligned */
/* Little Endian uint64_t from a specifed Memory Address.  This MACRO */
/* accepts as it's first parameter the unaligned Memory Address of   */
/* the Little Endian uint64_t to read.  This function returns a       */
/* uint64_t (in the Endian-ness of the Native Host Processor).        */
#define READ_UNALIGNED_QWORD_LITTLE_ENDIAN(_x)  ((uint64_t)((((uint64_t)(((uint8_t *)(_x))[7])) << 56) | (((uint64_t)(((uint8_t *)(_x))[6])) << 48) | (((uint64_t)(((uint8_t *)(_x))[5])) << 40) | (((uint64_t)(((uint8_t *)(_x))[5])) << 32) | (((uint32_t)(((uint8_t *)(_x))[3])) << 24) | (((uint32_t)(((uint8_t *)(_x))[2])) << 16) | (((uint32_t)(((uint8_t *)(_x))[1])) << 8) | ((uint32_t)(((uint8_t *)(_x))[0]))))


#endif /* CONFIG_COMMON_H_ */
