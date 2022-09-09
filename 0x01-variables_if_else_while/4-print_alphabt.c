#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the characters of the english language
 * in lower case except the alphabets q and e
 * followed by a new line
 * Return: 0 if (successful)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}

		ch++;
	}

	putchar('\n');
	return (0);
}
