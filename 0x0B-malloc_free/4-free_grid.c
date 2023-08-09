#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2D array
 * @grid: address of the 2D array to free
 * @height: the rows of the array to be freed
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
