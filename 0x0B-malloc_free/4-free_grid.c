#include "main.h"

/**
 * free_grid - function to free allocated memory
 * @grid: the array
 * @height: height of the array
 * Return: returns the void
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);

	free(grid);
}
