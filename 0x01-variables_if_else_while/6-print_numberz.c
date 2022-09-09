#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the single digits from 0 to 9
 * followed by a new line
 * Return: 0 if (successful)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
