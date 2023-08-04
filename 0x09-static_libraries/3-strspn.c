#include "main.h"

/**
 * _strspn - A funtion that accepts value
 * @s: input
 * @accept: input
 * Return: 0 (Successful)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
			{
				s++;
			}
			return (n);
}
