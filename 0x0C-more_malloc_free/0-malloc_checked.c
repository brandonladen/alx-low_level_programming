#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: an integer parameter rep size of memory to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
