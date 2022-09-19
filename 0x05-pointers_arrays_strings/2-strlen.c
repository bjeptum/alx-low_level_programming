#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string inputted
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int y = 0;

	for (*s != '\0'; s++);
	{
		y++;
	}
	return (y);
}
