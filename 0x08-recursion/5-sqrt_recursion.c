#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the num
 *
 * Return: On success, square root of x.
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

/**
 * check - check if a guess match the given number
 *
 * @a: our guess
 * @b: the given number
 *
 * Return: On success, square root of the given number.
 * On failure, -1
*/
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
