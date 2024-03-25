#include "main.h"

/**
 * get_endianness - checks  the endianness of the sysytem
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int endi = 1;
	char *endian = (char *)&endi;

	return (*endian == 1);
}
