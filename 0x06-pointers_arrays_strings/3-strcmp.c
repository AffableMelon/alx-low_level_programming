#include <stdio.h>
#include "main.h"

/**
 * _strcmp - returns the difference between two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the dif between the two
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (i >= 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			j = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			j = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			i++;
		}
	}
	return (j);
}
