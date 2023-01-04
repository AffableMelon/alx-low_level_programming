#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be reversed in recurssive order.
 * Return: string reversed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
