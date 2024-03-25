#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip
 * convert one number to another
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int xor_num = 0;

	while (xor != 0)
	{
		xor_num += xor & 1;
		xor >>= 1;
	}

	return (xor_num);
}
