#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		dest[y]++;
		src[z]++;
	}

	dest[y] = '\0';
	return (dest);
}
