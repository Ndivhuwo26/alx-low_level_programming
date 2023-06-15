#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees 2D array
 * @grid: it is a 2D grid
 * @height:the  height dimension of grid
 * Description:this will free memory of grid
 * Return: free
 *
 */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);
}

