#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets in lowercase using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
char i = 'a';

while (i <= 'Z')
{
	putchar(i);
	i++;

}

putchar('\n');

return (0);
}
