#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line
 * @str: the string to be printed
 * Return: returns the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0';)
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
