#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string that will be printed
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		s = s + 1;
		_puts_recursion(s);
	}
}
