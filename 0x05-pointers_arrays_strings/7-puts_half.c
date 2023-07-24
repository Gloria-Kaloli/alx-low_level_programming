#include "main.h"

/**
 * puts_half - A function that prints half a string
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 * Return: half of input
 */

void puts_half(char *str)
{
	int p, n, longi;

	longi = 0;

	for (p = 0; str[p] != '\0'; p++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (p = n; str[a] != '\0'; p++)
		_putchar(str[p]);

	_putchar('\n');
}

