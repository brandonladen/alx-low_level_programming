#include <stdio.h>
/**
 * main - A program that prints its name
 * @argc: Number of words in the command line
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s", argv[0]);
	printf("\n");

	return (0);
}
