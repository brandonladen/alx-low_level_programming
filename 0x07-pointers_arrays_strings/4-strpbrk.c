#include "main.h"
#include <string.h>
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: A poniter
 * @accept: A pointer
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;

	t = strpbrk(s, accept);
	return (t);
}
