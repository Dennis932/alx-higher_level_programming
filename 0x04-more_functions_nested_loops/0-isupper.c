#include "main.h"

/**
 * _isupper - checks the upper case letter
 * @c: 'checks the input'
 * Return: 1 if is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
