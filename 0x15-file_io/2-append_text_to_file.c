#include "main.h"

/**
 * append_text_to_file - add text to an existing file
 * @filename: name of file to append content to
 * @text_content: content to be appended
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		rwr = write(fd, text_content, numletters);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

