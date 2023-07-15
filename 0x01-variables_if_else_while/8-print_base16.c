#include <stdio.h>

/**
 * main - A program that prints hexadecimal
 * Return: 0 (successful)
 */

int main(void)
{
	char r;

	int v;

	r = 'a';
	v = 0;
	while
		(v < 10) {
			putchar(v + '0');
			v++;
		}
	while
		(r <= 'f') {
			putchar(r);
			r++;
		}
	putchar('\n');
	return (0);
}
