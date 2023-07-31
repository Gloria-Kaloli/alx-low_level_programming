#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: array
 * Return: 0 (successful)
 */

void print_chessboard(char (*a)[8])
{
	int p;

	int q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[p][q]);
		_putchar('\n');
	}
}
