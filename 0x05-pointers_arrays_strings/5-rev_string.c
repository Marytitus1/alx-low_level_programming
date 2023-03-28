#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reverse
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	char rev;
	int start, end, count;

	start = 0;
	end = 0;
	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	end = count - 1;

	for (start = 0; start < count / 2; start++)
	{
		rev = s[count];
		s[count] = s[end];
		s[end--] = rev;
	}
}

