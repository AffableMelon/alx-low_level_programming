#include <stdio.h>
#include "main.h"

/**
 * *_strcat - adds the src string to the dest string
 * @dest: destination string
 * @src: appending string
 *
 * Return: appended string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
	{
		j++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}

