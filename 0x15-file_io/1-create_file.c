#include "main.h"

/**
 * create_file - A  function that creates a file
 * @filename: file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int f, h, cre = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (cre = 0; text_content[cre];)
			cre++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	h = write(f, text_content, cre);
	if (f == -1 || h == -1)
		return (-1);
	close(f);
	return (1);
}
