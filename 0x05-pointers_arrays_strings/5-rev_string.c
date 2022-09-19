#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be inputted
 */
void rev_string(char *s)
{
	int y = 0;

	for (y -= 1; y >= 0; y--)
		for (s[y] != '\0')
		{
			y++;
		}
}
