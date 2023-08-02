#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n : number to return factorial of number
 * Return: 0 (successful)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
