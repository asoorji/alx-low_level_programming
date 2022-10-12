#include "function_pointers.h"

/**
 * int_index - does array search
 * @array: pointer to the array
 * @size: size of input array
 * @cmp: pointer to a comparison function
 * Return: -1 if none or index of search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		while (count < size)
		{
			if (cmp(array[count]))
				return (count);
			count++;
		}
	}

	return (-1);
}
