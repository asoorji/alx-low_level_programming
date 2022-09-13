#include "main.h"
/**
 * print_sign - entry point
 * Description: Function to check for the sign of a number
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	int output;

	if (n > 0)
	{
		output = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		output = 0;
		_putchar('0');
	}
	else
	{
		output = -1;
		_putchar('-');
	}

	return (output);
}
