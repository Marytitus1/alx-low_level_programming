#include "main.h"
#include <unistd.h>
/**
 * main: _putchar-prints a string, followed by a new line
 *@c: The character to print
 *
 * Return: 0, on success
 * On error return -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
