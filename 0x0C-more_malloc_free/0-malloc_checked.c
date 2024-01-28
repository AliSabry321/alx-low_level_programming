#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: size.
 *
 * Return: void return.
*/

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
