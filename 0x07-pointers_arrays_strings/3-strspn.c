#include "main.h"
#include <string.h>
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: a pointer
 * @accept: A pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
