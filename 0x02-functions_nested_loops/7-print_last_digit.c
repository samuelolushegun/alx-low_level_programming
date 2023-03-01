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

	if (n < 0)
	{
		c = 0 - n;
		c = c % 10;
	}
	else
	{
		c = n % 10;
	}
	return (c);
}
