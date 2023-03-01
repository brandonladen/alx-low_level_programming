#include <stdio.h>
#include "main.h"
/**
 * _puts - A function thta prints a string
 * @str: the parameter
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
