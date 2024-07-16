#include <stdlib.h>
#include "main.h"

/**
  * free_grid - Frees a 2-dimensional array of integers.
  * @grid: The 2-dimensional array to be freed.
  * @height: The height of the grid.
  *
  * Return: ...
  */

void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
        return;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
