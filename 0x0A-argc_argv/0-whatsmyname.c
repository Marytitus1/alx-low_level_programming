#include <stdio.h>
#include <stdlib.h>
/**
 * main => program that print it's name
 * @argc: argc parameter
 * @argv: an array of arguments
 *
 * Return: 0, on success
 * On error: return -1
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
