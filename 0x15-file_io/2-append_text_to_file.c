#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t nbytes = strlen(text_content);
	ssize_t ap_text;
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	ap_text = write(fp, text_content, nbytes);
	if (ap_text == -1)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
