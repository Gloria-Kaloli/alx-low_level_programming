#include "main.h"

/**
 * _strpbrk - The program entry point
 * @s: input
 * @accept: input
 *
 * Return: 0 (successful)
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
