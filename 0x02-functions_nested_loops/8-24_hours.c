#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 *
 * starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int g, h;

	g = 0;

	while (g < 24)
	{
		h = 0;

		while (h < 60)
		{
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(';');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
			h++;
		}
		g++;
	}

}
