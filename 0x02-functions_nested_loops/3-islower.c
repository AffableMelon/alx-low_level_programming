#include "main.h"
/**
 *_islower(int c) checks if word is lower or bigger
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
