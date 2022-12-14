#include "main.h"
#include <string.h>
/**
 * _strcat - appends the src string to the dest
 * @dest: pointer to the destination array where content is appended
 * @src: the string to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
