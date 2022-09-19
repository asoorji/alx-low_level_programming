#include "main.h"

/**
 * print_rev - reverses the string referenced by the input pointer
 * @s: pointer referencing the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
