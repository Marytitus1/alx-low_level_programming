#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of argument
 * @argc: argc parameter
 * @argv: an array of argument
 * Return: 0, on success
 * On error: return -1
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
