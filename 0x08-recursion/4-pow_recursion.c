#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: number
 * @y: power
 *
 * Return: On success, the value of x to the power of y.
*/
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);
	res = res * _pow_recursion(x, y - 1);
	return (res);
}
