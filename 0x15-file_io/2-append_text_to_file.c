#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1(success), or -1 on failiure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int R, D, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	R = open(filename, O_WRONLY | O_APPEND);
	D = write(R, text_content, l);

	if (R == -1 || D == -1)
		return (-1);

	close(R);

	return (1);
}
