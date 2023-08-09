#include "main.h"

/**
 * _puts - A program that prints sting to stdout
 * @str: string to be printed
 * _putchar: prints new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
