#include "main.h"
/**
 * factorial - A function that returns factorial of a number
 * @n: Integer to calculate the factorial
 * Return: factorial
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
