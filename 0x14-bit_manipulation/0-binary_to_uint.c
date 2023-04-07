#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uinit - A function converts binary to an unsigned int
 * @b: A pointer pointing to a string of 0 and 1 chars
 * Return: The converted number, or 0
 * Author : BRANDON ODHIAMBO
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i, len, super_s;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	len = 0;

	len = super_s = strlen(b);
	super_s -= 1;

	for (i = 0; i <= len; i++)
	{
		if (b[i] == '1')
		{
			n += 1 << (super_s);
		}
		super_s--;
	}
	return (n);
}
