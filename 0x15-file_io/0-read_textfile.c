#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * read_textfile - A fuction that reads a text file and prints it 
 * @filename: Name of the file to be accessed
 * @letters: The number of letters t should read and print
 * Return: The actual number of letters it should read and print
 *
 * Author - BRANDON ODHIAMBO
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t len = 0;
	FILE *fp;
	char ch[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	
	while (fgets(ch, sizeof(ch), fp) != NULL && len < letters)
	{
		printf("%s", ch);
		len += strlen(ch);
		
	}
	fclose(fp);

	return (len);
}
