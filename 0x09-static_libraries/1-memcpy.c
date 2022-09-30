#include "main.h"

/**
 * _memcpy - copies n bytes from src pointer to dest pointer
 * @dest: pointer to dest pointer
 * @src: pointer to src pointer
 * @n: size of bytes to copy
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);

}
