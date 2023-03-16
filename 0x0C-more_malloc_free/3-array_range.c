#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i, len, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min) + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
