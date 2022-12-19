#include <stdio.h>
#include "main.h"

/**
 * _strlen - counts length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (i <= *s)
	{
		i++;
		s++;
	}
	return (i);
}
