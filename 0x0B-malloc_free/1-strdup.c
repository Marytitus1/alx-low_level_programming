#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: a pointer to the duplicated string on success
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
		y++;
	}

	new = malloc(y * sizeof(char) +1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < y; z++)
	{
		new[z] = str[z];
	}

	return (new);
}

