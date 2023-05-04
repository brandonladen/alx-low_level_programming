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
	char b[33];
	int i;

	for (i = 0; i < 32; i++)
		b[i] = '0';
	b[i] = '\0';

	i = 31;
	while (n > 0)
	{
		if (n & 1)
			b[i] = '1';
		n >>= 1;
		i--;
	}
	i = 0;
	while (b[i] == '0' && b[i + 1] != '\0')
		i++;
	while (b[i] != '\0')
	{
		_putchar(b[i]);
		i++;
	}
	_putchar('\n');
}
