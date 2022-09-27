#include "main.h"
/**
 * _strchr - finds the first occurrence of a string
 * @s: the string to be checked
 * @c: the character to be searched in s
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s != c)
			s++;
		else
			return (s);
	} while (s != NULL);
	return (NULL);
}
