#include <stdlib.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of division
 */
int my_div(int a, int b)
{
	if (b == 0)
		return 0;

	return a / b;
}

/**
 * mod - Computes the remainder of division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of division
 */
int mod(int a, int b)
{
	if (b == 0)
		return 0;

	return (a % b);
}
