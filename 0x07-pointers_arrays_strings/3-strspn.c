#include <stdio.h>
#include "main.h"
/**
 * _strspn - gives number of bytes in the initial str
 * @s: pointer to be checked
 * @accept: pointer to be found
 * Return: bytes of appearance
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match++;
			}
			j++;
			else
			{
				return (match);
			}
		}
	}
	return (match);
}
