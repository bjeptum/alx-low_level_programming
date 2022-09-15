#include "main.h"
/**
 * _islower - checks for lowercase character
 * c: the character to be inputted
 *
 * Return: 0 (Exit)
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
