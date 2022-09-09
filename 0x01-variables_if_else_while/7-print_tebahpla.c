#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output lower case characters of the english
 * language in reverse followed by a new line
 * Return: 0 if (successful)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
