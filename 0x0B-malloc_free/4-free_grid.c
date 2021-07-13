#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int u;

if (grid == NULL || height == 0)
return;

for (u = 0; u < height; u++)
free(grid[u]);

free(grid);
}
