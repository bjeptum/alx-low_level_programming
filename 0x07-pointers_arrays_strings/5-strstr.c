#include <stdlib.h>
/**
 * _strncmp - compares two strings within b bytes
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if the strings are the same
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}

#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main C string to be scanned
 * @needle: the smaller string to be searched within the haystack
 * Return: returns a  pointer to first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;
	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
