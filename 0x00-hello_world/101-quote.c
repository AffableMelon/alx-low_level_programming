#include <stdio.h>
#include <unistd.h>

/**
 * main - printthe given phrase
 *
 * Return: 0 always if it exist
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
