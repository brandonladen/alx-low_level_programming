#include "main.h"
/**
 * _isupper - A program that checks if a character is uppercase
 * @c: character to be used
 * Return: returns 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
