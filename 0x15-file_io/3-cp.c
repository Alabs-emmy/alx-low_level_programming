#include "main.h"

void close_file(int flieds);

/**
 * main - main function copies the content of a file to another file.
 * @argc: number of arguement to program count.
 * @argv: pointer to an array of pointer to arguements.
 *
 * Return: Always 0
 *
 * Description: if arguement count is incorrect - exit code 97.
 *
 *		if file_from does not exits or
 *		you cant read from it - exit code 98.
 *
 *		if file_to cannot be created or written to - exit code 99.
 *
 *		if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);

	fd_1 = open(argv[1], O_RDONLY);
	r = read(fd_1, buffer, 1024);
	fd_2 = open(argv[2], O_CREAT | O_RDWR | O_APPEND | O_TRUNC, 00664);

	do {
		if (fd_1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fd_2, buffer, r);
		if (fd_2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: cant write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_1, buffer, 1024);
		fd_2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(fd_1);
	close_file(fd_2);
	return (0);
}

/**
 * close_file - close the file descriptor.
 * @flieds: file desciptor to be closed.
 *
 * Return: on success - 1
 */
void close_file(int flieds)
{
	int c;

	c = close(flieds);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", flieds);
		exit(100);
	}
}
