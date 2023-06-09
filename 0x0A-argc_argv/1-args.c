#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of argument passed into program
 * @argc: lenth of argv
 * @argv: array of passed arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)*argv;
	return (0);
}
