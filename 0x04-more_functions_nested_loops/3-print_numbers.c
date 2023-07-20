#include "main.h"

/**
 * print_numbers - A function that prints numbers from 0 to 9
 * Return: 0 (successful)
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
