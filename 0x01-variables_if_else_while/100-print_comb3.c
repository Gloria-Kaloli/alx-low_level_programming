#include <stdio.h>

 /**
  * main - program that prints digits
  * Return: 0 (successful)
  */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(',');
				putchar('.');
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}