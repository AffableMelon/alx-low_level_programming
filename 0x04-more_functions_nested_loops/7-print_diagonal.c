#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal
 * @n: how long the diagonal
 * Retruns: returns a diagonal n times
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		_putchar('\n');
		}
	else if (n <= 0)
		_putchar('\n');
}
