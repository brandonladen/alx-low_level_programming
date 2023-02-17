#include <stdio.h>
#include <string.h>
/**
 * main - A program to print alphabets
 * Return: 0
 */
int main(void)
{
char *alphabets = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n";
size_t i;
for (i = 0; i < strlen(alphabets); i++)
{
putchar(alphabets[i]);
}
return (0);
}
