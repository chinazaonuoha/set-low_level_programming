#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers
 * (grid) previously allocated by alloc_grid
 * @grid: The pointer to the grid to free
 * @height: The height of the grid (number of rows)
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
{
return;
}

i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
