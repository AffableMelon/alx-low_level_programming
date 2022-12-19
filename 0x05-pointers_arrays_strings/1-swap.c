#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the given ints
 * @a: first int 
 * @b: second int
 * Return: swapped ints
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
