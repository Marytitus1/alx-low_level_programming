#include <stdio.h>

/**
 * main - print number of argument
 * @argc: argc parameter
 * @argv: an array of argument
 * Return: 0, on success
 * On error: return -1
 */
int main(int argc, char *argv[] __attribute__((unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
