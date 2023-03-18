#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print alphabet in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
