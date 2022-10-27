#include "main.h"

/**
 * binary_to_uint - function that converts binary input to integer
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int count, binary;

	if (!b)
		return (0);

	result = 0;

	for (count = 0; b[count] != '\0'; count++)
		;

	for (count--, binary = 1; count >= 0; count--, binary *= 2)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		if (b[count] & 1)
		{
			result += binary;
		}
	}

	return (result);
}
