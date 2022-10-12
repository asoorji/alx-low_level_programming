#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the input name to print
 * @f: the function to use to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
