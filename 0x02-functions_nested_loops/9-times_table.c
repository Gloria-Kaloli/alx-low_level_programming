#include "main.h"

/**
 * times_table - Function that prints the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int q, r, s;

	for (q = 0; q <= 9; q++)
	{
		for (r = 0; r <= 9; r++)
		{
			s = q * r;

			if ((s / 10) == 0)
			{
				if (r != 0)
					_putchar(' ');
				_putchar(s + '0');

				if (r == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
				if (r == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

