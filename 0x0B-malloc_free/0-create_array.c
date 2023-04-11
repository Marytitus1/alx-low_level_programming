#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of character
 * @size: size of memory to be allocated
 * @c: character to print
 *
 * Return: pointer to the array, or NULL if there is an error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}

	return (str);
}
