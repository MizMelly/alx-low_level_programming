#include "main.h"
/**
 * _islower-check if char is lowercase
 * at c: is the char to be checked
 * Return: 1if char is lowercase. otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
