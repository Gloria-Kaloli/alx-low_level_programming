#include <stdio.h>

/**
 * main - A program  that prints numbers from 1 to 100
 *
 * Fizz is printed for multiples of five
 * Buzz, for both multiples of three and five, FizzBuzz
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
