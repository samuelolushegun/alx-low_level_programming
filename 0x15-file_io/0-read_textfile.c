#include <unistd.h>
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
	FILE *fp;
	char buffer[letters];
	ssize_t r_letters, w_letters;

	fp = fopen(filename, "r");
	if (fp == -1)
		return (0);

	r_letters = read(fp, buffer, letters);
	if (r_letters == -1)
		return (0);

	w_letters = write(STDOUT_FILENO, buffer, letters);
	if(w_letters == -1 || w_letters != letters)
		return (0);
	close(fp);
	return (w_letters);
}
