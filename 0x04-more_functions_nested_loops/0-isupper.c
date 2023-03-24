#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 on success
 * on error, return 0
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++);
	if (c >= 'Z')
	{
		return (1);

	}
	else
		return (0);
}
