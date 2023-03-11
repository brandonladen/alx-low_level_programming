#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	}

	return (0);
}
