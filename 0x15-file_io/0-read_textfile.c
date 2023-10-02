#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: name of file
 * @letters: text in file
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *std;
	ssize_t f;
	ssize_t l;
	ssize_t r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	std = malloc(sizeof(char) * letters);
	r = read(f, std, letters);
	l = write(STDOUT_FILENO, std, r);
	free(std);
	close(f);
	return (l);
}
