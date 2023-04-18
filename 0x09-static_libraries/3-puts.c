#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: always 0
 * On error, return -1
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\0');
}
