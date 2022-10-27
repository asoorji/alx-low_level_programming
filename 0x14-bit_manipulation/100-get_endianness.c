#include "main.h"

/**
 * get_endianness - function to checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
