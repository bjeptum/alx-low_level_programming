#include <stddef.h>
#include "main.h"

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
/**
* read_textfile - reads a text file and prints it to stdout
* @filename: name of file
* @letters: letters to be read
* Return: number of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = NULL;
	ssize_t fd, r, w;

	if (!filename || !letters)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));

	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);

	if (w != r)
		return (0);
	return (r);
}
