#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be inputted
 */
void rev_string(char *s)
{
	int y, i, m;
	char *a, d;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}
	for (m = 1; m < y; m++)
	{
		a++;
	}
	for (i = 0; i < (y / 2); i++)
	{
		d = s[i];
		s[i] = *a;
		*a = d;
		a--;
	}
}
