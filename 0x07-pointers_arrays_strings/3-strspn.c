#include "main.h"
/**
 * _strspn - gets the len gth of a prefix substring
 * @s: first string
 * @accept: another string whose characters are searched
 * Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = 0;
	int i;
	int j;

	if ((s == NULL) || (accept == NULL))
	{
		return len;
	}
	while (*s && _strchr(*accept, s++))
	{
		len++;
	}
	return len;
}
