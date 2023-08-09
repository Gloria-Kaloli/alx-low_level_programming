#include "main.h"

/**
 * _atoi - A program that converts a string into an integer
 * @s: string to use
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int bit = 1, i = 0;
	unsigned int unbit = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			bit *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		unbit = (unbit * 10) + (s[i] - '0');
		i++;
	}
	unbit *= bit;
	return (unbit);
}
