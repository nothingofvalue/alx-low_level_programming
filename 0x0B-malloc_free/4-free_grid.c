#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: pointer to the 2D array
 * @height: height of the 2D array
 *
 * Description: Frees the memory occupied by a 2D array.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}
