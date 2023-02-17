#include <stdio.h>
#include <string.h>
/**
 * main - A program to print alphabets
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 0; i <= 90; i++)
{
for(j = 10; j <= 19; j++)
{
if ((j % 10) > (i % 10))
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i != 18 || j != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
