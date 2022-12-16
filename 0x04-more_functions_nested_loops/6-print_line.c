#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a line
 * @n: how long the line is
 * Retruns: a line n long
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
