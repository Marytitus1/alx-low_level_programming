#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print alphabets in lowercase using putchar
 *
 * Return: 0 on success
 */
int main(void)
{

char alphabet = 'a';

while (alphabet <= 'Z')
{
	putchar(tolower(alphabet));
	alphabet++;
}

putchar('\n');

return (0);
}
