#include "main.h"

/**
 * print_most_numbers - A function that prints numbers from 0 to 9
 * Return: 0 (successful)
 */

void print_most_numbers(void)
{
	int f;

	for (f = 48; f < 58; f++)
	{
		if (f != 50)
		{
			if (f != 52)
			{
				_putchar(f);
			}
		}
	}
	_putchar('\n');
}
