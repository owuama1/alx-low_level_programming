#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees a 2 dimensional grid previously created
*@grid: the grid
*@height: the height
*Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return; /* Nothing to free for invalid input*/
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]); /* Free the memory for each row*/
		}
	}

	free(grid); /* Free the memory for the array of row pointers*/
}
