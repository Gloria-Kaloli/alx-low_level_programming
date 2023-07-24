#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int w;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (w = 0 ; w <= t ; w++)
	{
		if (w % 2 == 0)
	{
		_putchar(str[w]);
	}
	}
	_putchar('\n');
}
