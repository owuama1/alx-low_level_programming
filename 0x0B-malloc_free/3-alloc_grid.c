#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - create a grid
*@width: width of grid
*@height: height of grid
*Return: returns a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL); /* Return NULL for invalid width or height*/
	}

	if (grid == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* Free previously allocated memory*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL); /* Return NULL if memory allocation for rows fails*/
		}

		/* Initialize each element to 0*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
