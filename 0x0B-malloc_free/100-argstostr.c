#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: int
 * @av: char
 *
 * Return:  a pointer to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int r, s, t = 0, u = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (s = 0; av[r][s]; s++)
			u++;
	}
	u += ac;

	str = malloc(sizeof(char) * u + 1);
	if (str == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (s = 0; av[r][s]; s++)
		{
			str[t] = av[r][s];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}
