#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the object to copy the character
 * @b: character to be copied
 * @n: integer count of first bytes to be filled
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s = (char *) str;

	for (i = 0; i < n ; i++)
		s[i] = b;
}
