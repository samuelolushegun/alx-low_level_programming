#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		switch (*format)
		{
		case 'c':
			c = (char)va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(ap, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float)va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
		}
		format++;
		if (*format)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
