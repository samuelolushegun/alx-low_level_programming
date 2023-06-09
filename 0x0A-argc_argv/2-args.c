#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: size of argv
 * @argv: argument that will be passed to programe
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
