#include "main.h"

/**
 * print_times_table - prints time table
 * @n : use in times table
 * Return:void
 */
void print_times_table(int n)
{
	int row = 0, rep, col;

	if (n < 0 || n > 15)
		return;

	while (row <= n)
	{
		for (col = 0; col <= n; col++)
		{
			rep = row * col;
			if (col == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar (' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}
