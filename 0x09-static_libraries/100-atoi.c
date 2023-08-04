#include "main.h"

/**
 * _atoi - A funtion that convert a string into an integer
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, m = 0;
	unsigned int res = 0;

	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
			sign *= -1;
		m++;
	}
	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		res = (res * 10) + (s[m] - '0');
		m++;
	}
	res *= sign;
	return (res);
}
