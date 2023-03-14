#include "main.h"
#include <stdlib.h> 
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to a 2 dimensional array of integers
 * @height: number of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
{
return;
}

for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
}
}

free(grid);
}
