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
	int o;
	int len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (o == -1)
	{
		return (-1);
	}
	while (text_content[len])
		len++;
	if (text_content == NULL)
	{
		close(o);
		return (-1);
	}
	else
	{
		write(o, text_content, len);
	}
	close(0);
	return (1);
}
