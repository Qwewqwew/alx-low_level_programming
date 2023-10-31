#include "main.h"
/**
 * free_grid - A function that frees a 2 dimensional array
 * previously created
 * @grid: previously made grid
 * @height: input
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
