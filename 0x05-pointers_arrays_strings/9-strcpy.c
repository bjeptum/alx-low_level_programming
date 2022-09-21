#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destination array wher content is copied
 * @src: the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

