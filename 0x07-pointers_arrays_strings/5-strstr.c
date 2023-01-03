#include <stdio.h>
#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring in a string
 * @haystack: pointer to be checked
 * @needle: substring to be found
 * Return: substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j=0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
