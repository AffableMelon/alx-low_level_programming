#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: how wide the square is
 * Retruns: returns a square of n length
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else if (size <= 0)
		_putchar('\n');
}
