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

	for (i = 0; *s != '\0';)
	{
		i++;
		s++;
	}
	return (i);
}
