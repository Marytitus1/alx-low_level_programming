#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be printed
 *
 * Return: 0 on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
