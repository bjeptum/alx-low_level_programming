#include"main.h"
/**
 * get_bit - Returns the value of a bit at index
 * @index: the index of bit
 * @n: the bit
 * Return: value of bit at index,else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	unsigned long int soln;

	bit = n >> (index);
	soln = (bit & 1);
	return (soln);
}
