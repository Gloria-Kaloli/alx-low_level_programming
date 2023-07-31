#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: 0 (successful)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *v = haystack;
		char *m = needle;

		while (*v == *m && *m != '\0')
		{
			v++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
