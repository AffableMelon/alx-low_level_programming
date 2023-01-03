#include <stdio.h>
#include "main.h"
/**
 * _strspn - gives number of bytes in the initial str
 * @s: pointer to be checked
 * @accept: pointer to be found
 * Return: bytes of appearance
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	
	while (*s)
	{
		for (j = 0 ;accept[j] != '\0'; j++)
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
