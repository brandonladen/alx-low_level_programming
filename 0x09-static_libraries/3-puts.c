#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: (void)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
