#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -it will free 2d array
 * @grid:the 2d grid
 * @height:the  height dimension of grid
 * Description:it will frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
