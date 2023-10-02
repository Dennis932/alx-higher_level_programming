#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opt, bw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opt = open(filename, O_WRONLY | O_APPEND);
	bw = write(opt, text_content, len);

	if (opt == -1 || bw == -1)
		return (-1);

	close(opt);

	return (1);
}
