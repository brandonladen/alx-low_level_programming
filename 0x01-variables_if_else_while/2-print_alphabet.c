#include <stdio.h>
#include <string.h>
/**
 * main - A program to print alphabets
 * Return: 0
 */
int main(void)
{
int i;
char *alphabets = "abcdefghijklmnopqrstuvwxyz\n";
for (i = 0; i < strlen(alphabets); i++)
{
putchar(alphabets[i]);
}
return (0);
}
