#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies the src string to the dest string
 * @dest: destination string
 * @src: appending string
 * @n: amount of bytes to be copied
 * Return: appended string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

