#include "main.h"
#include <string.h>
/**
 * _strchr - A function that locates a character in a string
 * @s: pointer
 * @c: charater to be copied
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
}
