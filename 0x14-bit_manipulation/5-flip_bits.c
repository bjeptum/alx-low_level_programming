#include "main.h"
/**
* flip_bits - returns count of bits flipped one number to another
* @n: set a of bits
* @m: set b of bits
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int count = 0;

	for (i = 31; i >= 0; i--)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;

		if (a != b)
			count++;
	}
	return (count);
}
