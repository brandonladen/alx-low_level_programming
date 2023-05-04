#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to hopes to jump
 * @index: The index
 *
 * Return: bit 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}
