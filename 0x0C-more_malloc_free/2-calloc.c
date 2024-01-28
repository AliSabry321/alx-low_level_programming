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
	void *new;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(sizeof(size) * nmemb);
	if (new == NULL)
		return (NULL);
	return (new);
}
