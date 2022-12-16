#include <stdio.h>
#include "main.h"
/**
 *_isupper - checks if upper or lower alphabet
 *
 *
 *Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
