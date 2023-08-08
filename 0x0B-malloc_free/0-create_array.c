#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char
 * @c: char to assign
 * @size: size of array
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int r;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
		str[r] = c;
	return (str);
}
