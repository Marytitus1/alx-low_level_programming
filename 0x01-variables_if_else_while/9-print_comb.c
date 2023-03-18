#include <stdio.h>

/**
 * main - This program prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int i;

for (i = 10; i < 20; i++)
{
	putchar((i % 10) + '0');
	if (i != 19)
	{
		putchar(',');

		putchar(' ');
	}
}

putchar('\n');

return (0);
}
