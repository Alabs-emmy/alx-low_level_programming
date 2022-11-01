#include "main.h"

/**
 * read_textfile - function reads a text file and prints it
 *		to the POSIX standard output.
 *
 * @filename: pointer to the file to read from.
 *
 * @letters: number of bytes of letter the function
 *		should read and print from.
 *
 * Return: the number of bytes thst was printed if succesful
 *	otherwise - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
