#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add 2 ints
 * @a: first arg
 * @b: second arg
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - make difference of  2 ints
 * @a: first arg
 * @b: second arg
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplie 2 ints
 * @a: first arg
 * @b: second arg
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: first arg
 * @b: second arg
 *
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - make a modulo calcul
 * @a: first arg
 * @b: second arg
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
