#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character to print
 *
 * Return: 0 on sucess
 * On error, return -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
