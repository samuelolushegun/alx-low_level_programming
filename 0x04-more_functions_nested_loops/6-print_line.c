#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter that is the number of times the character _  should be printed
 *
 * Return: a line.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
