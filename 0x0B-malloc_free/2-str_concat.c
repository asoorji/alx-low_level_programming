#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: resulting string
 */
char *str_concat(char *s1, char *s2)
{
	int length_1 = 0, length_2 = 0, final_length = 0, k = 0;
	char *space;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length_1])
		length_1++;

	while (s2[length_2])
		length_2++;

	final_length = length_1 + length_2;

	space = (char *)malloc(final_length * sizeof(char) + 1);

	if (space == NULL)
		return (NULL);

	length_2 = 0;

	while (k < final_length)
	{
		if (k < length_1)
			space[k] = s1[k];

		if (k >= length_1)
		{
			space[k]  = s2[length_2];
			length_2++;
		}
		k++;
	}
	space[k] = '\0';

	return (space);
}
