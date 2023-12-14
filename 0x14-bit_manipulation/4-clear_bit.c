#include "main.h"
/**
 * clear_bit - Seys value of a bit to 0
 * @index: index of  abit
 * @n: pointer to bit to be identified
 * Return: Always 0, else -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1lu << index);
	return (1);
}
