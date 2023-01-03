#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - search for a byt in set of bytes
 * @s: pointer to be checked
 * @accept: byt to be found
 * Return: bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
