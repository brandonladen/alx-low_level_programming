#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - A function that converts a binary number to an int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number of 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	i = 0;
	if (b == NULL)
		return (dec);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (dec);
		}
		i++;
	}

	i = 0;
	while (b[i] != '\0')
	{
		dec += (b[i] - '0') << (strlen(b) - 1 - i);
		i++;
	}

	return (dec);
}
