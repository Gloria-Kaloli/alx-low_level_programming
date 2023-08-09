#include "main.h"

/**
 * _isalpha - A program that checks for alphabetic characters
 * @c: char to be checked
 *
 * Return: 1 if c is a letter and 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
