#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: pointer to array
 * On error: return NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *z;

	/* check if NULL is passed to s1*/
	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}

	/* check if NULL is passed to s2 */
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}

	/* allocate memory and memory for s1 and s2 */
	z = malloc((a * sizeof(char)) + (b * sizeof(char)) + 1);
	if (z == NULL)
	{
		return (NULL);
	}

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < z)

			z[c] = s1[c];

		else
			z[c] = s2[d++];
	}
}
