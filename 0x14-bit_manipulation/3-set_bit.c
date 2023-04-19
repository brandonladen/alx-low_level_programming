#include "main.h"
/**
 * set_bit - A function that returns the value of a bit at a given index
 * @n: Pointer to integer whose binary bits is to be calculated
 * @index: The index of n in binary form
 * Return: 1 or -1
 * Author - BRANDON ODHIAMBO
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
