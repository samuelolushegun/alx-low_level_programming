#include "main.h"

/**
 * jack_bauer - print every minute of the day of jack bauer
 *
 * Return: Nada
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48 ; a <= 50 ; a++)
	{
		if (a < 50)
		{
			for (b = 48 ; b <= 57 ; b++)
			{
				for (c = 48 ; c <= 53 ; c++)
				{
					for (d = 48 ; d <= 57 ; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (b = 48 ; b <= 51 ; b++)
			{
				for (c = 48 ; c <= 53 ; c++)
				{
					for (d = 48 ; d <= 57 ; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
