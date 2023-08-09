#include "main.h"

/**
 * _strstr - A program entry point
 * @haystack: input
 * @needle: input
 *
 * Return: 0 (successful)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *t = needle;

		while (*r == *t && *t != '\0')
		{
			r++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
}
