#include "main.h"

/**
 * print_alphabet_x10 - main function
 *
 * Description: print all the letters of the english language
 * from a to z then a new line and repeating the process 10 times.
 * The rule is that the code can only contain the _putchar
 * function twice characters contained in _putchar
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
