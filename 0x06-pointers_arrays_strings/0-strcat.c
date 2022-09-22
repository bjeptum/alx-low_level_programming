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
	int i;
	int dest_len;

	dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + 1] = src[i];
	}
	for ( ; src[i] == '\0'; i++)
	{
		dest[dest_len + 1] = '\0';
	}
	return (dest);
}
