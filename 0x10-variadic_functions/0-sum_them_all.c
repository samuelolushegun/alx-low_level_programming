#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 * @n: number of variable arguments
 *
 * Return: sum of all its parameters or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (i = 0; i < n; i++)
		s += va_arg(a, int);
	va_end(a);
	return (s);
}
