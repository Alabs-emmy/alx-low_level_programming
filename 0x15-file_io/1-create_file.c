#include "main.h"


/**
 * create_file - function creates a file, if file already exit
 *		it trauncates it.
 * @filename: pointer to the file that neds to be created.
 *
 * @text_content: pointer to the null terminated string to be
 *		wriiten into the created file.
 *
 * Return: if successful 1, else -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
