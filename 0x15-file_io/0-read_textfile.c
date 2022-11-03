#include <stddef.h>
#include "main.h"

#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>  
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

	if(!filename)
		return (0);

	buff = malloc(sizeof(char)*(letters + 1));

	if(!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	
	if(!w)
		return (0);

	free(buff);
	close(fd);

	return (letters);
}
