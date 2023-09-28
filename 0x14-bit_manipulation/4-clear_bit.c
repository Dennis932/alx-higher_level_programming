#include "main.h"
/**
 * clear_bit - clears the bits
 * @n: actual value
 * @index: index of the actual value
 * Return: 1 on success and -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1UL << index;

	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~bitmask;
		return (1);
	}
	else
		return (-1);
}
