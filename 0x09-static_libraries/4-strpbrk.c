#include "main.h"

/**
 * _strpbrk - Beggining point
 * @s: input
 * @accept: input
 * Return: 0 (Successful)
 */

char *_strpbrk(char *s, char *accept)
{
	int g;

		while (*s)
		{
			for (g = 0; accept[g]; g++)
			{
				if (*s == accept[g])
				return (s);
			}
			s++;
		}

		return ('\0');
}
