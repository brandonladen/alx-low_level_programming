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
	unsigned int mask;
	int flag;

	mask = 1 << 31;
	flag = 0;
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (n == 0)
		_putchar('0');
	_putchar('\n');
}
