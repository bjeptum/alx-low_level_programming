#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to a bit to be set
* @index: index of a bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1lu << index);

	if (*n & 1)
	{
		return (1);
	}
	else
		return (-1);
}
