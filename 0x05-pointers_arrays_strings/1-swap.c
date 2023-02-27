#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: first value
 * @b: second value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
