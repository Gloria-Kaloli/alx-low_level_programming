#include "main.h"

/**
 * print_alphabet_x10 - Program that prints lowercase ten times
 */

void print_alphabet_x10(void)
{
	char r, t;

	for (r = 0; r <= 9; r++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}

}
