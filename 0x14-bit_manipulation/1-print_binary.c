#include <stdio.h>
#include "main.h"
/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: A number to determine its binary representation
 * Return: 0
 *
 * Author - BRANDON ODHIAMBO
 */
void print_binary(unsigned long int n)
{
	unsigned long int z, rem, len = 0, temp = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		while (temp != 0)
		{
			len++;
			temp >>= 1;
		}
		while (len > 0)
		{
			len--;
			z = n >> len;
			rem = z & 1;
			_putchar(rem + '0');
		}
	}

}
