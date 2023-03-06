#include "main.h"
/**
 * _memset - A function that fills memory with  a constant byte.
 * @s: a pointer
 * @b: a character to fill the memory area with.
 * @n: an integer to be filled
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
