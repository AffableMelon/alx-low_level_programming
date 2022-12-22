#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - returns the string in upper case
 * @a: pointer
 * Return: upper case letters.
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
