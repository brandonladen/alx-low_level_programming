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
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
