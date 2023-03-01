#include "main.h"

/**
 * print_last_digit - do exactly what his name says
 *@n: this is enter parameter
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c = 0 - c;
	}
	_putchar(c + '0');
	return (c);
}
