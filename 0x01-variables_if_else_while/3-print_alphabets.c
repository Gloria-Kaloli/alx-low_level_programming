#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase then uppercase
 * Return: 0 (successful)
 */

int main(void)
{
	char g;

	char h;

	g = 'a';
	h = 'A';
	while
		(g <= 'z') {
			putchar(g);
			g++;
		}
	while
		(h <= 'Z') {
			putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}
