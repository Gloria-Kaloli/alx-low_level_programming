#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 *  of string to uppercase
 *  @n: pointer
 *  Return: n
 */

char *string_toupper(char *n)
{
	int r;

	r = 0;
	while (n[r] != '\0')
	{
		if (n[r] >= 'a' && n[r] <= 'z')
			n[r] = n[r] - 32;
		r++;
	}
	return (n);
}
