#include <stdio.h>
#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of a charachter
 * @s: string to be checked for the occurence of a charachter
 * @c: charachter to be found
 * Return: pointer to the first occurence of the charachter
 * Null if no occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
