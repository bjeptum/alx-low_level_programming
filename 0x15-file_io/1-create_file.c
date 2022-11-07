#include<stddef.h>
#include "main.h"
/**
* create_file - creates a file
* @filename: the file to be created
* @text_content: string written to file
* Return: 1 n success and -1 on error
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0000);
	if (o == -1)
	{
		close(o);
	}
	w = write(o, text_content, len);
	if (w == -1)
	{
		close(0);
	}
	return (1);
}
