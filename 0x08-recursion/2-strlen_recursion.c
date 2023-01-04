#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints length of a string.
 * @s: string to be counted.
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));

	}
	return (0);
}
