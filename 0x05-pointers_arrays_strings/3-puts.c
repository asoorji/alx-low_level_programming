#include "main.h"

/**
 * _puts - writes the string to the command line
 * followed by the new line character
 * @str: pointer referencing the memory address where
 * the string is stored in form of an array
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
