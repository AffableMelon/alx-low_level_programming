#include <stdio.h>
#include "main.h"

/**
 * puts2 - returns every other character in a string
 * @str: the pointer to the string
 * Return: every other string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
