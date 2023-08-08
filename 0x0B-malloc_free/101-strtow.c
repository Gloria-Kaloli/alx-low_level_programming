#include "main.h"
#include <stdlib.h>

/**
 * count_word - A helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, r, t;

	flag = 0;
	t = 0;
	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			t++;
		}
	}
	return (t);
}
/**
 * **strtow - A function that splits a string into words
 * @str: string to split
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **matrix, *tmp;

	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
