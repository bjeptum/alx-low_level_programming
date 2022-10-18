#include "main.h"
/**
 * _strncpy - copies the string pointed to by src
 * @dest: pointer to the destination array wher content is copied
 * @src: the string to be copied
 * @n: number of characters to be copied
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; n > i && src[i] == '\0'; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
