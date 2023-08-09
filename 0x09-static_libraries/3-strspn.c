#include "main.h"

/**
 *  _strspn - A program entry point
 *  @s: input
 *  @accept: input
 *  Return: 0 (successful)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				r++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (r);
		}
		s++;
	}
	return (r);
}
