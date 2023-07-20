#include "main.h"

/**
 * _isupper - A program that checks for uppercase character
 * @c: variable text
 * Return: 0 (successful)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
