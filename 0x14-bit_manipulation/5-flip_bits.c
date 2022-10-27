#include "main.h"

/**
 * flip_bits - function to flip bite
 * @n: source int
 * @m: destination int
 * Return: bit count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}
