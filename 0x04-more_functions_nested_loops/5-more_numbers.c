#include "main.h"

/**
 * more_numbers - prints 10 times 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int a;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (a = 48; a < 50; a++)
		{
			for (i = 48; i < 58; i++)
			{
				if (a == 49 && i <= 52)
				{
					_putchar(a);
				}
				if ((a == 48) || (a == 49 && i <= 52))
					_putchar(i);
			}
		}
		_putchar('\n');
	}
}
