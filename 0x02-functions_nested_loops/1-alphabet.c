#include "main.h"

/**
 * print_alphabet - A program that prints alphabet in lowercase
 *
 * Return:void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
