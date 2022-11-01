#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to a bit to be set
* @index: index of a bit
* Return: Always 1 and -1 is errored
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
