#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t nbytes = (strlen(text_content) + 1);
	ssize_t w_files;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w_files = write(fd, text_content, nbytes);
		if (w_files == -1)
			return (-1);
		return (1);
	}
	close(fd);
	return (1);
}
