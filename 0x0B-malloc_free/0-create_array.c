#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size:  size of the array
 * @c: type of char to be added?
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(c) * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);

	free(j);
}
