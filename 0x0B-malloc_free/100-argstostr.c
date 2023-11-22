#include "main.h"

/**
 * argstostr - concatenates all arguments of my program
 * @ac: argument
 * @av: array of arguments
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 * Return: NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			len += str_len(av[i]) + 1;
	}

	s = (char *)malloc(len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (k = 0; av[i][k] != '\0'; k++)
			{
				s[j++] = av[i][k];
			}
			s[j++] = '\n';
		}
	}
	s[len] = '\0';
	return (s);
}

/**
 * str_len - calculates the length of a string
 * @s: input string
 * Return: length of the string
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
