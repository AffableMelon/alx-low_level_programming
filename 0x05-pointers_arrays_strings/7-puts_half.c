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

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		for (; j <= i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else if (i % 2 != 0)
	{
		i--;
		j = i / 2;
		for (; j <= i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}

