#include "main.h"
/**
 * print_line - Prints line
 * @n: number of tomes to print _
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
