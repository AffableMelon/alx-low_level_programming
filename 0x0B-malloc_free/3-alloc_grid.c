#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2s array of int
 * @width: width of dimension
 * @height: height of diension
 * Return: 2d array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		return (NULL);
		free(a);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
