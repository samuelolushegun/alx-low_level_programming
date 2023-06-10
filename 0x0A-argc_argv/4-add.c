#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: lenth of argv
 * @argv: array of arg
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, a;
	int s = 0;

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a]; a++)
		{
			if (argv[i][a] < '0' || argv[i][a] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
