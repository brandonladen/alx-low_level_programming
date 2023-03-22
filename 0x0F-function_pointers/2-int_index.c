#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: A pointer to the array
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compile values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
