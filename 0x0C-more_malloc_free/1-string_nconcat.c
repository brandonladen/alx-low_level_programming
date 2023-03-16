#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to be concatenated by s1
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	len1 = len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	ptr = malloc(sizeof(char) * n + len1 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[i + len1] = '\0';

	return (ptr);
}
