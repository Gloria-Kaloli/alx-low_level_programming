#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: 0 (successful)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;

	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				m++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
