#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: another string whose characters are searched
 * Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					y++;
			}
		}
		else
			return (y);
	}
	return (y);
}
