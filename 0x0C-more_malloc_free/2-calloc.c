#include "main.h"

/**
 * _calloc -  function that allocates memory for an array,
 * using malloc.
 *
 * @nmemb: number of ele.
 * @size: size.
 *
 * Return: new.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(sizeof(size) * nmemb);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		new[i] = 0;
	return (new);
}
