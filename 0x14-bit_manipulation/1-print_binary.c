#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: a decimal number
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int idx = 0;
	unsigned long int len = (sizeof(unsigned long int) * 8);
	unsigned long int text = (1 << (len - 1));
	int flag = 0;

	while (idx < len)
	{
		if (n & text)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			if (flag == 1)
				_putchar('0');
			else
			{
				if (idx == (len - 1))
					_putchar('0');
			}
		}
		idx++;
		text >>= 1;
	}
}
