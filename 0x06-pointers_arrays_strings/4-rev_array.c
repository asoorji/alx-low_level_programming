#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pointer referencing the integer array
 * @n: the length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count = 0, partition;

	for (partition = n / 2; partition > 0; partition--, count++)
	{
		a[n - count - 1] += a[count];
		a[count] = a[n - count - 1] - a[count];
		a[n - count - 1] = a[n - count - 1] - a[count];
	}
}
