#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings,
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
}
