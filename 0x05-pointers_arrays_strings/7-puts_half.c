#include <stdio.h>
#include "main.h"

/**
 *puts_half - returns the second half of the string
 *
 *@str: the string to be cut and returned
 *
 *Return: the strings second half
 */

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		for (k = j; k <= i; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		i--;
		j = i / 2;
		for (k = j; k <= i; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}

