#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * append_text_to_file - A function that appends a text at the end of a file
 * @filename: The name of the file
 * @text_content: A NULL terminated string to be appended
 * Return: 1 on success, -1 on failure
 *
 * Author - BRANDON ODHIAMBO
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
