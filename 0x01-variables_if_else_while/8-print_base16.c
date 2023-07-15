#include <stdio.h>

/**
 * main - program that prints base numbers
 * Return: 0 (successful)
 */

int main(void)
{
	char s;

	int r;

	s = 'a';
	r = '0';
	while
		(r < 10) {
			putchar(r + '0');
			r++;
		}
	while
		(s <= 'f') {
			putchar(s);
			s++;
			}
	putchar('\n');
	return (0);
}
