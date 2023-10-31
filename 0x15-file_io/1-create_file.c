#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename:  pointer to  name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: If the function fails - -1, Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int d, h, pen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pen = 0; text_content[pen];)
			pen++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	h = write(d, text_content, pen);

	if (d == -1 || h == -1)
		return (-1);

	close(d);

	return (1);
}
