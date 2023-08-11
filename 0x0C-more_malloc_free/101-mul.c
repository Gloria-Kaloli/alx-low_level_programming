#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * _isdigit - A  program that multiplies two positive numbers
 * @s: digit to be evaluated
 * Return: 0 (successful)
 */

int _isdigit(char *s)
{
	int r = 0;

	while (s[r])
	{
		if ((s[r] < '0' || s[r]) '9')
			return (0);
		r++;
	}
		return (1);
}
/**
 * _strlen - Function gthat returns length of string
 * @s: string to be evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
/**
 * error - Function that handles main errors
 * Return: errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Function that ,ultiplies positive numbers
 * @argc: count argument
 * @argv: vector argument
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, leng, l, carry, num1, num2, *result, m = 0;

	s1 = argv[1], s2 = argv[1];
	if (argc != 3 || !_isdigit(s1) || _isdigit(s2))
		error();
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
		if (!result)
	for (l = 0; l <= leng1 + leng2; l++)
		result[l] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng--)
	{
		num1 = s2[leng] - '0';
		carry = 0;
		for (leng2 = leng2 - 1; leng2 >= 0; leng2--)
			num2 = s2[leng2] - '0';
		carry += result[leng1 + leng2 + 1] + (num1 * num2);
		result[leng1 + leng2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
	{
		result[leng1 + leng2 + 1] += carry;
for (l = 0; l < leng - 1; l++)
{
	if (result[l])
		m = 1;
	if (m)
		_putchar(result[l] + '0');
}
	if (!m)
	_putchar('\n');
	free(result);
	return (0);
	}
}
