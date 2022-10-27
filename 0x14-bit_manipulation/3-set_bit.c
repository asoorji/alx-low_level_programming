#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: pointer to input number
 * @index: index of the bit.
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
		return (-1);

	temp = 1 << index;
	*n = (*n | temp);

	return (1);
}
