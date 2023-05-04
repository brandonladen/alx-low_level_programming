#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you would flip
 * @n: Starting point
 * @m: The target position
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int x;

	x = n ^ m;

	while (x)
	{
		bit += x & 1;
		x >>= 1;
	}
	return (bit);
}
