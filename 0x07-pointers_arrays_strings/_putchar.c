#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: character to write to stdout
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
