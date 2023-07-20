#include "main.h"

/**
 * more_numbers - A program that 10 times the number from 0 to 14
 * Return: 0 (successful)
 */

void more_numbers(void)
{
	int r, t;

	for (r = 0; r < 10; r++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t >= 10)
				_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
