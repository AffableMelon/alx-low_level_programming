#include "main.h"
/**
 * _islower - checks if word is lower or bigger
 * @c: the charachter
 * Return 1 if lowercase otherwise 0 if capital
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
