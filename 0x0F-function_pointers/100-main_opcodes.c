#include <stdio.h>
#include <stdlib.h>

/**
* main - funtion that prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Successful)
*/

int main(int argc, char *argv[])
{
	int bytes, r;
	char *pww;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	pww = (char *)main;
	for (r = 0; r < bytes; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", pww[r]);
			break;
		}
		printf("%02hhx ", pww[r]);
	}
	return (0);
}

