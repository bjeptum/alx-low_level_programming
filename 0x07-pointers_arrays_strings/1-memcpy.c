#include "main.h"
/**
 * _memcpy - copie smemory area
 * @dest: target memory area
 * @src: source mmeory area
 * @n: count of bytes to be copied
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
