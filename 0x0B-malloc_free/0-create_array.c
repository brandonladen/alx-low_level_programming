#include "main.h"
#include <stdlib.h>
/**
 * create_array - A func that creates an arr and initializes it with char
 * @size: The size of array
 * @c: The caharacter to be stored
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);

}
