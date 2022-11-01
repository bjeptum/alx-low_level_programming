#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - converts a binary string to unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: an unsigned int value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
