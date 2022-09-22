#include "main.h"
/**
 * _strncat - appends the src string to the dest for only n bytes
 * @dest: pointer to the destination array where content is appended
 * @src: the string to be appended
 * @n: total bytes to be used by src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + 1] = src[i];
	}
	for ( ; i == n && src[i] == '\0'; i++)
	{
		dest[dest_len] = '\0';
	}
	return (dest);
}
