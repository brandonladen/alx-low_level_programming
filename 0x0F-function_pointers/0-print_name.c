#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name.
 * @name: A pointer to a null-terminated string containing name to print.
 * @f: A pointer that takes a single arg of type char * and return nothing.
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
