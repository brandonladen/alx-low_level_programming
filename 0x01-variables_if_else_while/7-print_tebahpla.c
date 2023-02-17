#include <stdio.h>
#include <string.h>
/**
 * main - A program to print alphabets
 * Return: 0
 */
int main(void)
{
char *alphabets = "abcdefghijklmnopqrstuvwxyz";
size_t i;
for (i = strlen(alphabets); i > 0; i--)
{
putchar(alphabets[i - 1]);
}
putchar('\n');
return (0);
}
