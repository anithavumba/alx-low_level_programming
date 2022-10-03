#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - a funtion to free matrix
 *@grid: matrix being passed
 *@height: freeing using height variable
 *Return: nothinng
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
}	free(grid);
