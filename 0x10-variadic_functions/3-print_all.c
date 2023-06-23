#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * str_nil - prints string or (nil)
 * @s: string
 *
 * Return: nothing.
 */

void str_nil(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int long i = 0;
	va_list a;
	int flag = 0;

	va_start(a, format);
	if (format == NULL)
		return;
	while (i < strlen(format))
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(a, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(a, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(a, double));
			flag = 1;
			break;
		case 's':
			str_nil(va_arg(a, char *));
			flag = 1;
			break;
		default:
			flag = 0;
			break;
		}
		if (i < (strlen(format) - 1) && flag == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}
