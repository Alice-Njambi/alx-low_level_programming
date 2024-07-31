#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Creates a 2-dimensional array of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: Pointer to the 2D array of integers. NULL on failure or if width
*         or height is 0 or negative.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int w, h;

/* Validate input dimensions */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the array of pointers to rows */
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

/* Allocate memory for each row and initialize elements to 0 */
for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(width * sizeof(int));
if (grid[h] == NULL)
{
/* Free previously allocated rows in case of failure */
for (w = 0; w < h; w++)
free(grid[w]);
free(grid);
return (NULL);
}

/* Initialize elements to 0 */
for (w = 0; w < width; w++)
{
grid[h][w] = 0;
}
}

return (grid);
}
