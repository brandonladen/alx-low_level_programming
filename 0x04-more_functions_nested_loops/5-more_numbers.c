#include "main.h"
/**
 * more_numbers - Prints from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int counter = 1;

	do {
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar('1');
				_putchar(i - 10 + '0');
			}
		}
		_putchar('\n');
		counter++;
	} while (counter < 11);
}
