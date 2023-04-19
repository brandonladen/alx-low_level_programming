#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: A pointer to a number
 * index: Where to set the bit to 0
 * Return: 1 Succees or -1 for error
 * Author - BRANDON ODHIAMBO
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
