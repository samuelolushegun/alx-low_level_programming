#include <stdio.h>
#include "main.h"

/**
 * main - Prints prog name
 * @argc: lenth of argv
 * @argv: array of passed arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - argc)]);
	return (0);
}
