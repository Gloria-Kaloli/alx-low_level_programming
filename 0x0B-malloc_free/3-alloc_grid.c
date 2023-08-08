#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2
 * dimensional array of integers
 * @width: int
 * @height: int
 *
 * Return: width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **rss;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	rss = malloc(sizeof(int *) * height);

	if (rss == NULL)
		return (NULL);

			for (x = 0; x < height; x++)
			{
				rss[x] = malloc(sizeof(int) * width);
				if (rss[x] == NULL)
				{
					for (; x >= 0; x--)
						free(rss[x]);
					free(rss);
					return (NULL);
				}
			}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			rss[x][y] = 0;
	}
	return (rss);
}
