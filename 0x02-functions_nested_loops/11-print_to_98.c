#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: numbers to be printed
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int a, b;

	for (a = n; a <= 98; a++)
	{
		if (a < 98)
		{
			printf("%d, ", n);
		}
		else if (a == 98)
		{
			printf("%d\n", n);
		}
		for (b = n; b > 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", n);
			}
			else if (b == 98)
			{
				printf("%d\n", n);
			}
		}
	}
}
