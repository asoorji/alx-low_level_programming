#include "main.h"

/**
 * print_line - print a straight line on the terminal using the _ character
 * @n : number of _ to be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
