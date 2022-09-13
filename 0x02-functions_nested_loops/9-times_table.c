#include "main.h"

/**
 * times_table - prints times tables 0 - 9
 * Return: void
 */
void times_table(void)
{
	int row = 0;
	int col;
	int rep;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			rep = row * col;
			if (col == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
