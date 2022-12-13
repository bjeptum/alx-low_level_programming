#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: converted string
 */i
int _atoi(char *s)
{
	short boolean;
	int i, negative, result;
	i = negative = result = boolean = 0;
	negative = -1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			negative *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{ 
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= negative;
	return (result);
}
