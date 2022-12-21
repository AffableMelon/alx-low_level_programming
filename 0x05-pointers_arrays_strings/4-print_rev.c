#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: the string to be printed
 * Return: returns the string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
