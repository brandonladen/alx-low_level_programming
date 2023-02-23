#include <stdio.h>
/**
 * main - Prints prime factors of a number
 * Return: 0
 */
int main(void)
{
long int n = 612852475143;
int i;
long int largest_factor = 0;
for (i = 2; i * i <= n; i++)
{
while ((n % i) == 0)
{
largest_factor = i;
n /= i;
}
}
if (n > 1)
{
	largest_factor = n;
}
printf("%ld", largest_factor);
printf("\n");
return (0);
}
