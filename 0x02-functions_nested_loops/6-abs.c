#include "main.h"
/**
 * _abs - returns absolute value of the number
 * @n: the number
 * Return positive number only
 */
int _abs(int)
{
	int n

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		n=(-n);
		return (n);
	}
}
