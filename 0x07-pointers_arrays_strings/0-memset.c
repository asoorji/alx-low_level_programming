#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the char element
 * @b: target data
 * @n: number of index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
