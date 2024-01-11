#include "main.h"
/**
 * read_textfile - reads textfile & prints it
 * @filename: name of file
 * @letters: length of letters to be read and printed
 *
 * Return: Count of letters read and printed, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, sz, w;
	char *c = NULL;

	c = malloc(sizeof(char) * (letters + 1));

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(c);
		return (0);
	}
	sz = read(fd, c, letters);
	if (sz < 0)
	{
		free(c);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, c, sz);
	free(c);
	close(fd);

	if (w != sz)
	{
		return (0);
	}
	return (sz);
}
