#include "main.h"

/**
 * print_binary - binary representation of number.
 *
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bin, num_bin = 0;
	unsigned long int crnt;

	for (bin = 63; bin >= 0; bin--)
	{
		crnt = n >> bin;

		if (crnt & 1)
		{
		_putchar('1');
	num_bin++;
		}
		else if (num_bin)
		_putchar('0');
	}
if (!num_bin)
_putchar('0');
}
