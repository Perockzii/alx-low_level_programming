#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: content to be copied into the file
 * Return: 1 on success  or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
	rwr = write(fd, text_content, numletters);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
