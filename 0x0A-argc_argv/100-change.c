#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum nbr of coins to make change for an amount of money
 * @argc: lenth of argv
 * @argv: array of args
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int n, a, s = 0;
	int l[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	for (a = 0; a < 5; a++)
	{
		if (n >= l[a])
		{
			s = s + (n / l[a]);
			n = n % l[a];
		}
	}
	printf("%d\n", s);
	return (0);
}
