#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_string_length - A function that returns thr str len;
 * @s1: input one
 * @s2: input two
 * Return: 0
*/
int get_string_length(char *s1, char *s2)
{
	int i, j, len, len1 = 0, len2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

i = j = 0;

while (s1[i] != '\0')
{
len1 += i++;
}
while (s2[j] != '\0')
{
len2 += j++;
}
	len = len1 + len2;
	return (len);
}
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: joined string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len;

	len  = get_string_length(s1, s2);

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = j = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
}
