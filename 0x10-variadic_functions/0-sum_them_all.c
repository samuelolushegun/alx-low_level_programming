#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of variable parameters that will be pass
 * @...: variable parmeters
 *
 * Return: sum of variable parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int S;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	S = 0;
	for (i = 0; i < n; i++)
	{
		S += va_arg(ap, int);
	}
	va_end(ap);
	return (S);
}
