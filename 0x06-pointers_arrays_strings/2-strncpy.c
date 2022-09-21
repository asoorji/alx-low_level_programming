#include "main.h"

/**
 * *_strncpy - copies a string just like strncpy
 * @dest: pointer referencing the destination
 * @src: pointer referencing the source
 * @n: the integer input
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];

	for ( ; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
