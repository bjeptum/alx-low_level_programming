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
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}
		else
			return (len);
	}
	return (len);
}
