#include "main.h"
/**
 * binary_to_uint - converts inputs to unsigned intergers
 * @b: pointers to strings
 * Return: 0 on Null
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int final = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		final = (final << 1) | (b[i] - '0');
	}
	return (final);
}

