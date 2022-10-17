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
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
