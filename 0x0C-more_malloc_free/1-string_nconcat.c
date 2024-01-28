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
	char *new = NULL;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1] != 0)
			len1++;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2] != 0)
			len2++;
	}

	new = malloc(len1 + len2);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	for (i = 0; i < len2 && i < n; i++)
		new[i + len1] = s2[i];

	new[i + len1] = 0;
	return (new);
}
