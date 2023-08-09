#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Description: A function returns a pointer to a 2D array of integers
 *
 * Return: NULL on failure else pointer to the 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	/*create local variables*/
	int row, i, col;
	int **grid_array;

	/*rr[i][j]);check if width or height is NULL */
	if (width <= 0 || height <= 0)
		return (NULL);
	/*dyanmically create a pointer to a 2D array */
	grid_array = (int **)malloc(height * sizeof(int *));
	/*care for malloc return */
	if (grid_array == NULL)
	{
		free(grid_array);
		return (NULL);
	}
	/**
	 * create a loop that dynamically creates
	 * space for each row element and col element of the 2D array
	 */
	for (row = 0; row < height; row++)
	{
		grid_array[row] = (int *)malloc(width * sizeof(int));
		/*check if memory allocation was successful*/
		if (grid_array[row] == NULL)
		{
			/*free all individual space and return NULL*/
			for (i = 0; i < row; i++)
				free(grid_array[i]);
			/* free the main grid_array */
			free(grid_array);
			return (NULL);
		}
		/*if no leaks then fill actual cols */
		for (col = 0; col < width; col++)
			grid_array[row][col] = 0;
	}
	return (grid_array);
}
