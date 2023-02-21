#include "main.h"
/**
 * print_sign - A program that prints the sign of a number
 * @n: the integer to be checked
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('/');
		_putchar('\n');
		return (-1);
	}
}
