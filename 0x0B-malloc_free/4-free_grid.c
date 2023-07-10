#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension 
 * Description: frees memory 
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int ABC;

	for (ABC = 0; ABC < height; ABC++)
	{
		free(grid[ABC]);
	}
	free(grid);
}


















