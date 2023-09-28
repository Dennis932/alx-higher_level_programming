#include "main.h"
/**
 * set_bit - set bit to 1 at a given index
 * @n: actual value
 * @index: the index of the value
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
