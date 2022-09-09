#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the possible combinations of a
 * 2 digits digit without repeating reverse
 * Return: 0 if (successful)
*/
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);

				if (i == 57 && e == 56)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}

			i++;
		}

		e++;

	}

	putchar('\n');
	return (0);
}
