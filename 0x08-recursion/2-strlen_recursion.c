#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of string
 * @s: A pointer
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
