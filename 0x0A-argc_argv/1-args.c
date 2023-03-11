#include <stdio.h>
/**
 * main - A program that prints its name
 * @argc: Number of words in the command line
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
