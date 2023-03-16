#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: elements of the array
 * @size: size of each element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
