#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as
 * parameter.
 * @str: string to be copied to a new memory
 * Return: Null if str = NULL or pointer to duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0';)
		i++;

	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		a[j] = str[j];
	}
	return (a);

	free(a);
}
