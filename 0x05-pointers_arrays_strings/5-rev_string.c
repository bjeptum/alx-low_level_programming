#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be inputted
 */
void rev_string(char *s)
{
	int y, i, m;
	char *end, temp;

	end = s;

	while (s[y] != '\0')
	{
		y++;
	}
	for (m = 1; m < y; m++)
	{
		end++;
	}
	for (i = 0; i < (y / 2); i++)
	{
		temp = s[i];
		s[i] = *end;
		*end = temp;
		end--;
	}
}
