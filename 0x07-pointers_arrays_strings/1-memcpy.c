#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n byts from memory area to destination
 * @src: memory area
 * @n: n bytes of the memory
 * @dest: destiantion memory area
 * Return: a pointer to the destination memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
