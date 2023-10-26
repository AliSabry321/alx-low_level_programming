#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string
 *
 * Return: the number of bytes in the string pointed to by s
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == 0)
		return (len);
	s++;
	len = _strlen_recursion(s) + 1;
	return (len);
}
