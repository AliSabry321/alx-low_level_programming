#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum.
 * @max: maximum.
 *
 * Return: new.
*/

int *array_range(int min, int max)
{
	int i;
	int *new;

	if (min > max)
		return (NULL);

	new = malloc((max - min + 1) * sizeof(int));
	if (new == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		new[i] = min;

	return (new);
}
