#include "main.h"

/**
 * string_nconcat -  * string_nconcat - string_nconcat
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: size.
 *
 * Return: new.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2 = 0;
	unsigned int len1 = 0;
	unsigned int i = 0;
	char *new;

	while (s1[len1] != 0)
		len1++;

	while (s2[len2] != 0)
		len2++;

	new = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	for (i = 0; i < len2 && i < n; i++)
		new[i + len1] = s2[i];

	return (new);
}
