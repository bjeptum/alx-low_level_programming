#include "main.h"
/**
* get_bit - returns the value of a bit at a given index
* @n: bit to be identified
* @index: index of the bit
* Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int new_n;

	new_n = n >> (index);
	return (new_n & 1);
}
