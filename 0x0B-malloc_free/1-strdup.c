#include "main.h"
#include <string.h>
/**
 * _strdup - This function returns a pointer to a null-terminated byte string
 * @str: A pointer to the string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	return (dup);
}
