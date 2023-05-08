#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: A pointer to text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed,
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	
	if (!letters)
		return (0);

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	t = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, t);
	if (fd == -1 || t == -1 || w == -1 || w != t)
	{
		free(b);
		return (0);
	}

	free(b);
	close(fd);
	return (w);
}
