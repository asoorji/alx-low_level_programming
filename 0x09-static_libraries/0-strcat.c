#include "main.h"

/**
 * _strcat - merges or concatenates 2 strings together
 * @dest: pointer referencing the destination string
 * @src: pointer referencing source string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int count = -1, n;

	for (n = 0; dest[n] != '\0'; n++)
	;
	do {
		count++;
		dest[n] = src[count];
		n++;
	} while (src[count] != '\0');

	return (dest);
}
