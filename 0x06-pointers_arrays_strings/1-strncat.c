#include <stdio.h>
#include "main.h"

/**
 * *_strncat - adds the src string to the dest string
 * @dest: destination string
 * @src: appending string
 * @n: amount of bytes to be appended
 * Return: appended string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		j++;
		i++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}

