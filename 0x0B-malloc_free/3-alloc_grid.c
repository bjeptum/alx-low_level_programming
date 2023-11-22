#include "main.h"
/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: element of array
 * @height: element of array
 * all elements initialized to 0 in array
 * if width or height is 0 negative return NULL
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the rows */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if an allocation fails */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	/* Return the pointer to the 2D array */
	return (grid);
}
