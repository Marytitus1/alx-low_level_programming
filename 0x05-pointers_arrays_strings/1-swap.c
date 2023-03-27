#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the value to swap
 * @b: the value to swap
 *
 * Return: 0 on success
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
