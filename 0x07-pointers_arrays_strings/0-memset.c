#include "main.h"
/**
 * _memset-fill the block of memory with constant byte
 * @s: startint address of the memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
