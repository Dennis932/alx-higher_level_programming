#include "main.h"
/**
 * flip_bits - flips the bits
 * @m: value long int
 * @n: value long integer
 * Return: the actual value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int final = n ^ m;
	unsigned int cnt = 0;
	
	while (final != 0)
	{
		cnt += final & 1;
		final >>= 1;
	}
	return (cnt);
}
