#include "main.h"

/**
 * *_strncat - Concatenates certain bytes of 2 given strings
 * @dest: pointer referencing the destination string
 * @src: pointer referencing the source string
 * @n: number of bytes to pick
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, i;

	for (count = 0; dest[count] != '\0'; count++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[count + i] = src[i];

	dest[count + i] = '\0';

	return (dest);
}
