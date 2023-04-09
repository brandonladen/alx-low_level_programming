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
	unsigned long int z, rem, len = 0, temp = n, count = 0;

	while (temp != 0)
	{
		len++;
		temp = temp >> 1;
	}

	if (index >= len)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	while (len > 0)
	{
		len--;
		z = n;
		n = n >> 1;
		rem = z & 1;
		if (count == index)
		{
			rem = 1;
		}
		count++;
	}
	return (-1);
}
