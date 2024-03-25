#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer
 * @index: The index of the bit to clear
 *
 * Return: 1 (on success), or -1 (on failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
