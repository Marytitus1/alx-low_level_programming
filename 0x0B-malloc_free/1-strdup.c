#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: a pointer to the duplicated string on success
 * On error: return NULL
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int y, z;

	if (str == 0)
	{
		return (NULL);
	}

	for (y = 0; str[y]; y++)
	{
		str[y] = '\0';
	}

	new = malloc(y * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < y; z++)
	{
		new[z] = str[y];
		new[z] = '\0';
	}

	return (new);
}

