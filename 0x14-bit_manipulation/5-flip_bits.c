#include "main.h"
/**
 * flip_bits - Gives count of bits flipped one number to another
 * @n: first set of bits
 * @m: second set of bits
 * Return: count of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
