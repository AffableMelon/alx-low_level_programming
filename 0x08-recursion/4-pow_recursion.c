#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - power of x to y.
 * @x: number to be multiplied.
 * @y: power.
 * Return: power of x to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
