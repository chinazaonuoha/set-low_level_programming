#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers (grid)
 *  with specified width and height
 * @width: The width of the grid (number of columns)
 * @height: The height of the grid (number of rows)
 * Return: A pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));

if (grid[i] == NULL)
{
while (i > 0)
{
i--;
free(grid[i]);
}
free(grid);
return (NULL);
}
}

return (grid);
}
