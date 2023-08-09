#include "main.h"

/**
 * _isupper - A function that checks for uppercase letters
 * @c: char to check
 *
 * Return: 0 (successful)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

