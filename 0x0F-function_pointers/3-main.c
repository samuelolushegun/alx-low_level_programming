#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - prints the result of the operation
 * @argc: lenght of argv
 * @argv: array of argument passed to the program
 *
 * Return: 98, 99, 100 or EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error1\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error2\n");
		return (99);
	}
	if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0)))
	{
		if (atoi(argv[3]) == 0)
		{
			printf("Error3\n");
			return (100);
		}
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	c = p(a, b);
	printf("%d\n", c);
	return (EXIT_SUCCESS);
}
