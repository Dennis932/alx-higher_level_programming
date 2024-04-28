#include "main.h"
/**
 * _puts_recursion - prints strings and new line
 * @s: string output
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puchar(*s);
	s++;
	_puts_recursion(s);
}
