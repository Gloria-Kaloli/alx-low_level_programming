#include "main.h"

/**
 * append_text_to_file -  Function that appends text at the end of a file
 * @filename: pointer  file
 * @text_content: string to add to 0end of the file
 *
 * Return: If the function fails or filename is NULL - -1
 * If the file does not exist the user lacks
 * write permissions - -1, Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d, c, fen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fen = 0; text_content[fen];)
			fen++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	c = write(d, text_content, fen);

	if (d == -1 || c == -1)
		return (-1);

	close(d);

	return (1);
}
