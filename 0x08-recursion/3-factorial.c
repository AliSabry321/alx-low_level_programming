#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the number
 *
 * Return: the factorial of a given number,
 * -1 if n is lower than 0
*/
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	res = res * factorial(n - 1);
	return (res);
}
