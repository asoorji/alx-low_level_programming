#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of the resulting array
 * @height: height of the resulting array
 * Return: pointer to the allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i = 0, k;

	if (width == 0 || height == 0)
		return (NULL);

	output = (int **) malloc(sizeof(int *) * height);

	if (output != NULL)
	{
		for (; i < height; i++)
		{
			output[i] = (int *) malloc(sizeof(int) * width);

			if (output[i] != NULL)
			{
				for (k = 0; k < width; k++)
					output[i][k] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(output[i]);
					i--;
				}

				free(output);

				return (NULL);
			}
		}
		return (output);
	}
	else
	{
		return (NULL);
	}
}

