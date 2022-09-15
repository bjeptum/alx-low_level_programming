#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be inputted
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _isalpha(int c)
{
	while (c >= 97 || c <= 127 && c >= 65 || c <= 90)
	{
		return (1);
	}
	return (0);
}
