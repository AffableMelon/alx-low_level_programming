#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2 or NULL if failure or empty string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *a;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	a = malloc(sizeof(char) * (i + j + 1));

	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	
	for (l = 0; l <= j; l++)
	{
		a[k] = s2[l];
		k++;
	}
	return (a);
}	
