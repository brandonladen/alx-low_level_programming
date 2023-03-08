#include "main.h"
/**
 * _print_rev_recursion - A main program
 * @s: - a pointer
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
