#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Retruns: returns 0-9
 */

void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
	_putchar('\n');
	}
}
