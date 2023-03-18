#include <stdio.h>
#include <time.h>

/**
 * main - prints all single digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}

	putchar('\n');

	return (0);
}
