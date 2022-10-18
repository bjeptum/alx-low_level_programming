#include "main.h"
/**
 * _isdigit - checks for a digit  0 to 9
 * @c: the character to be inputted
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _isdigit(int c)
{
	while ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
