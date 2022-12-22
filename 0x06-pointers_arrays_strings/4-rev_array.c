#include <stdio.h>
#include "main.h"

/**
 * reverse_array - prints reversed string
 * @a: array
 * @n:amount of elements
 */

void reverse_array(int *a, int n)
{
	int temp, i, j;

	j = 0;
	i = n--;
	for (; i > n / 2; i--)
	{
		temp = a[i - 1];
		a[i - 1] = a[j];
		a[j] = temp;
		j++;
	}
}
