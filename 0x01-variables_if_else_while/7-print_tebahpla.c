#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - print alphabet in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'z';

	while (alpha > 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
