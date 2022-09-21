#include "main.h"

/**
 * _strcmp - compares 2 strings together
 * @s1: pointer referencing the first string
 * @s2: pointer referencing the second string
 * Return: ns1 - ns2 if flase and 0 if true
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
	}

	return (0);
}
