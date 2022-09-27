#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main C string to be scanned
 * @needle: the smaller string to be searched within the haystack
 * Return: returns a  poineter to first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
			return (haystack);
	}
	if (*needle == '\0')
		return (haystack);
	return (NULL);
}
