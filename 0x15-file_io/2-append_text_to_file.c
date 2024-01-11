#include "main.h"
/**
 * append_text_to_file - appends text to endof file
 * @filename: name of file
 * @text_content: terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t sz;
	ssize_t w;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	/* append_text */
	sz = strlen(text_content);

	w = write(fd, text_content, sz);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
