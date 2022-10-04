#include "main.h"

/**
 * create_array - a function to create arrays
 * @size: the size of the proposed array
 * @c: the default values of the proposed array
 * Return: null or the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *reserved_space;

	if (size == 0)
		return (NULL);

	reserved_space = (char *)malloc(size * sizeof(char));

	if (reserved_space == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		reserved_space[count] = c;

	return (reserved_space);
}
