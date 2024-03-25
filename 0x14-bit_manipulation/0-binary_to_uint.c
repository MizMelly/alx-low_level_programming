#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int.
 * @b: A pointer to the binary string
 *
 * Return: The conversion, or 0 if "b" has an invalid character or is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int co_Num = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b == '0')
		{
			co_Num <<= 1;
		}
		else if (*b == '1')
		{
			co_Num = co_Num << 1;
			co_Num |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (co_Num);
}
