#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: the array pointer
 * @n: the pointer indicating the value of n
 * Constraints: Numbers must be separated by comma then followed by a space.
 * Numbers should be displayed in the same order they are stored in array.
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
