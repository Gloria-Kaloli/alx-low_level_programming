#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  Function that read text file print to STDOUT
 * @filename: file being read
 * @letters: number of letters to be read
 * Return: ctual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t d;
	ssize_t f;
	ssize_t r;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	r = read(d, file, letters);
	f = write(STDOUT_FILENO, file, r);

	free(file);
	close(d);
	return (f);
}
