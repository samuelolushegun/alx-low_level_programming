#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

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

	va_start(a, format);
	if (format == NULL)
		return;
	while (i < strlen(format))
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%d", va_arg(a, int));
			break;
		case 'i':
			printf("%d", va_arg(a, int));
			break;
		case 'f':
			printf("%f", va_arg(a, double));
			break;
		case 's':
			str_nil(va_arg(a, char *));
			break;
		default:
			break;
		}
		if (i < (strlen(format) - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}

/**
 * str_nil - print string or (nil)
 * @s: strint that will be test
 *
 * Return: Nothing.
 */

void str_nil(char *s)
{
	if (s == NULL)
		printf("nill");
	else
		printf("%s", s);
}
