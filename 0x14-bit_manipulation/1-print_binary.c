#include <stdio.h>
#include "main.h"
/**
 * print_binary - A function that prints binary rep of a number
 * @n: A number to be converted
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
