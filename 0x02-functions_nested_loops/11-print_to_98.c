#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number to 98
 * @n: first number whose will be print
 *
 * Return: nothing bro
 */
void print_to_98(int n)
{
	int i;

	printf("%d", n);
	for (i = (n + 1); i <= 98; i++)
	{
		printf(", %d", i);
	}
	if (n > 98)
	{
		for (i = (n - 1); i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");

}
