#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A funtion that prints a name
 * @name: name to print
 * @f: pointer to funtion
 *
 * Return: a name
 */

void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
