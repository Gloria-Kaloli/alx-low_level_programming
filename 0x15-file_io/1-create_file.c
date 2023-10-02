#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: name of file to be craeted
 * @text_content: content to be included in file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int c, f, cre = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (cre = 0; text_content[cre];)
			cre++;
	}
	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f = write(c, text_content, cre);
	if (c == -1 || f == -1)
		return (-1);
	close(c);
	return (1);
}
