#include "main.h"
#include <stdio.h>
/**
 * print_rev - A program that reverses a string
 * @s: The parameter to be used
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
