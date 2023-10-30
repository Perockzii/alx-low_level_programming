#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: string pointer
 * @letters: number of letters printed
 * Return: actual number of letter printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numrd, numwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	numrd = read(fd, buff, letters);
	numwr = write(STDOUT_FILENO, buff, numrd);

	close(fd);
	free(buff);

	return (numwr);
}
