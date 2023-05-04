#include "main.h"
/**
 * get_endianness - A function that checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *c;

	num = 1;

	c = (char*) &num;

	return (int)*c;
}
