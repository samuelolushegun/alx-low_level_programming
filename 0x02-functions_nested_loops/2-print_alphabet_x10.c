#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 * Return: None.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
