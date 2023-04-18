#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the character to return
 *
 * Return: 0 on success
 * On error, return error
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
