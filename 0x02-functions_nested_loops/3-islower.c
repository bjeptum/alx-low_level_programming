#include "main.h"
/**
 * _islower - checks for lowercase character
 * c: the character to be inputted
 *
 * Return: 0 (Exit)
 */
int _islower(void)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
