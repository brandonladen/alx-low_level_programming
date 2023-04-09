#include "main.h"
#include <stdint.h>
/**
 * get_endiannes - A function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 *
 * Author - BRANDON ODHIAMBO
 */
int get_endianness(void)
{
	uint16_t value = 0x1234;
	uint8_t *pt = (uint8_t *) &value;

	return (*pt == 0x12) ? 0 : 1;
}
