#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: rows of matrix
 * @height: column of string
 * Return: a pointer to a two dimensional grid
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
