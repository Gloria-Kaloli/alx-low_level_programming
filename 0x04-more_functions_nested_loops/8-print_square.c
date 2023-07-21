#include "main.h"

/**
 * print_square - A function that prints a square
 * @size: size of square
 * Description: use character '#' to print square
 */

void print_square(int size)
{
	int r, s;

	s = 0;

	if (size < 1)
		_putchar('\n');

	while (s < size)
	{
		r = 0;
		while (r < size)
		{
			_putchar('#');
			r++;
		}
		_putchar('\n');
		s++;
	}
}
