#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @x: Parameter whose the absolute value will be compute
 *
 * Return: Absolute value
 */
int _abs(int x)
{
	int c;

	if (x < 0)
	{
		c = 0 - x;
		return (c);
	}
	else
		return (x);
}
