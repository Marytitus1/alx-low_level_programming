#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets in lowercase using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
int i;

for (i = 'A'; i <= 'Z'; i++)
{
	i = tolower(i);
	putchar(i);
}

putchar('\n');

return (0);
}
