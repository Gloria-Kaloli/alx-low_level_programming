#include "main.h"

/**
 * _pow - A function that calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: calculated (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int f;

	num = 1;
	for (f = 1; f <= power; f++)
		num *= base;
	return (num);
}

/**
 * print_binary - Function that prints a number in binary notation
 * @n: number to print
 *
 * Return: 0 (successful)
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
