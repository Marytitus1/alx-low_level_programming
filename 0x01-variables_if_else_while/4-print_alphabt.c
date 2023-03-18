#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lowercase
 * exceptions: do not print letter "q" and "e"
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
