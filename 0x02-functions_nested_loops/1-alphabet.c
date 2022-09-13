#include "main.h"

/**
 * print_alphabet - main function
 *
 * Description: print all the letters of the english language
 * from a to z then a new line. The rule is that the code can
 * only contain the _putchar function twice
 * characters contained in _putchar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
