#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is the file's name
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t r_letters, w_letters;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	r_letters = read(fp, buffer, letters);
	if (r_letters == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}

	w_letters = write(STDOUT_FILENO, buffer, letters);
	if (w_letters == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (w_letters);
}
