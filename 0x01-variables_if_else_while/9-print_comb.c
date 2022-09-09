#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the possible combinations of a
 * single digit in ascending order
 * Return: 0 if (successful)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
