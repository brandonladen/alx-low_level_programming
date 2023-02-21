#include "main.h"
/**
 * print_alphabet_x10 - A program that prints alphabets
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
        int counter = 1;
        
	do
	{
	for (c = 'a'; c <= 'z' ; c++)
	{
		_putchar(c);
		
	}
        counter++;	
        _putchar('\n');
	}
	while (counter <= 10);
}
