#include "main.h"
/**
 * get_bit - getting bits of the index
 * @index: index of value starting from index 0
 * @n: actual value
 * Return: -1 and 0 on errors and index on success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index < sizeof(unsigned long int) * 8)
		if (n & mask)
			return (1);
		else
			return (0);
		else
			return (-1);
}
