#include "main.h"

/**
 * print_square - Print a square of single characters
 * @n : the number n x n of the square
 * Constraints -  use _putchar to print and use
 * Return: void
 */
void print_square(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
