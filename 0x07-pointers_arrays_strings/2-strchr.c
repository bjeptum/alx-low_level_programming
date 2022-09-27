#include "main.h"
/**
 * _strchr - finds the first occurrence of a string
 * @s: the string to be checked
 * @c: the character to be searched in s
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	else if	(*s++)
	{
		return (NULL);
	}
}
