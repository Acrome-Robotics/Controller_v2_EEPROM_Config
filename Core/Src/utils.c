/*
 * utils.c
 *
 *  Created on: Nov 29, 2021
 *      Author: umutediz
 */

#include "utils.h"

#define CRC_POLYNOMIAL (0x04C11DB7)
#define CRC_INITIAL    (0xFFFFFFFF)
#define COMPLEMENT_OUT (0)

uint32_t CRC_Calculate(uint8_t *data, uint32_t len){
	   uint32_t i, j;
	   uint32_t crc, msb;

	   crc = CRC_INITIAL;
	   for(i = 0; i < len; i++) {
	      // xor next byte to upper bits of crc
	      crc ^= (((uint32_t)data[i])<<24);
	      for (j = 0; j < 8; j++) {    // Do eight times.
	            msb = crc>>31;
	            crc <<= 1;
	            crc ^= (0 - msb) & CRC_POLYNOMIAL;
	      }
	   }
#if COMPLEMENT_OUT
	   return ~crc;
#else
	   return crc;
#endif
}

