#include <stdio.h>

/**
 * main - A program that prints combination of two two digit numers
 * Return: 0 (successful)
 */

int main(void)
{
	int v, w;

	for (v = 0; v < 100; v++)
	{
		for (w = 0; w < 100; w++)
		{
			if (v < w)
			{
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				putchar(' ');
				putchar((w / 10) + 48);
				putchar((w % 10) + 48);
				if (v != 98 || w != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
