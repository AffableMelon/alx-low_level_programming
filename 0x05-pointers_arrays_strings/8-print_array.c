#include <stdio.h>
#include "main.h"
/**
 * print_array - returns the n number of elements of an array
 * @a: the array pointer
 * @n: the amount of elements to be printed
 * Return: arrays n elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0;)
	{
		printf("%d", a[i]);
		i++;
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
