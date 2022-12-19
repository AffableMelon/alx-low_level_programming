#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @str: the string to be printed
 * Return: returns the string
 */
void print_rev(char *str)
{
	int i;

	i = 0;
	for (;*str != '\0';)
	{
		i++;
		str++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
		str--;
	}
	_putchar('\n');
}

