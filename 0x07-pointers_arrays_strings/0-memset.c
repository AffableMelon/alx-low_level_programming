#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the byts of memory area
 * @s: memory area
 * @n: first n bytes of the memory
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
