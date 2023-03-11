#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints sum
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'A' && *argv[i] <= 'Z') ||
			   (*argv[i] >= 'a' && *argv[i] <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
