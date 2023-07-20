#include"main.h"

/**
 * _isdigit - checks the digit between 0 and 9
 * @c: refers to a digit
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
