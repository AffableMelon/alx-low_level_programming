#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of the square
 * @a: the square matrix
 * @size: size of the matrix
 * Return: sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
