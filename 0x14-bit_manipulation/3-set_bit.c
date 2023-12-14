#include"main.h"
/**
 * set_bit - Sets the value of a bit to 1
 * @index: index of bit
 * @n: pointer of bit to be identified
 * Return: 1 if it worked or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1lu << index);
	return (1);
}
