#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that prints single digits of base '10'
 *
 * Return: 0 on success
 */
int main(void)
{

	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
