#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: Is the name of the file to be created
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 * Author - BRANDON ODHIAMBO
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fp = fopen(filename, "w");
		fprintf(fp, "%s", "");
		fclose(fp);
		return (1);
	}
	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
