#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks if a variable is a digit or not
 *
 *@c: the varibale to be checked
 *
 *Return: 1 if c is a digit and 0 if it isnt
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
