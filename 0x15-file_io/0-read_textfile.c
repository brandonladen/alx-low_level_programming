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

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		free(b);
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		free(b);
		return (0);
	t = read(fd, b, letters);
	if (t == -1)
	{
		free(b);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, b, t);
	if (w == -1 || w != t)
	{
		free(b);
		close(fd);
		return (0);
	}

	free(b);
	close(fd);
	return (w);
}
