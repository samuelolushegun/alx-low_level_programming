#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: other variable args
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
