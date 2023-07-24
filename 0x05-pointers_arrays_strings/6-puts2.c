#include "main.h"

/**
 * puts2 - A function that  prints every other character of a string
 * starting with the first character
 * @str: string
 * Return: character
 */

void puts2(char *str)
{
	int longi = 0;
	int b = 0;
	char *w = str;
	int a;

	while (*w != '\0')
	{
		w++;
		longi++;
	}
	b = longi - 1;
	for (a = 0; a <= b; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putcar('\n');
}
