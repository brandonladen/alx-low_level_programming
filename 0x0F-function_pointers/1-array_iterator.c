#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: A pointer to the array
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
