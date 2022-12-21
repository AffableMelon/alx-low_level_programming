#include "main.h"
/**
 * rev_string - reverse the string.
 * @s: string to be reversed
 * Return: string reversed
 */
void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = i - 1;

	while (j < k)
	{
		l = s[j];
		s[j] = s[k];
		s[k] = l;
		j++;
		k--;
	}
}
