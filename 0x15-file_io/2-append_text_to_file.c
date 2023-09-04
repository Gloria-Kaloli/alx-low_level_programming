#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: file to check
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int s, f, check = 0;

	if (filename == NULL)
	{
		for (check = 0; text_content[check];)
		check++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	f = write(s, text_content, check);

	if (s == -1 || f == -1)
		return (-1);
	close(s);
	return (1);
}
