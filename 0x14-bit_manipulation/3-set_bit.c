#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: A pointer to pointer the unsigned long integer.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 (success) or -1 (Fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
