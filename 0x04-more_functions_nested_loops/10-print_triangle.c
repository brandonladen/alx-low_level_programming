#include "main.h"
/**
 * print_triangle - Prints triangle
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <=size; i++)
	{
		for (j = 1; j <= size - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
