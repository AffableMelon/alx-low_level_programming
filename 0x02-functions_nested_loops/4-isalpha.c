#include "main.h"
/**
 * _isalpha - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
