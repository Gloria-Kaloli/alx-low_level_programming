#include <stdio.h>
 /**
  * main - program that prints all single digit numbers
  * Return: 0 (successful)
  */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
