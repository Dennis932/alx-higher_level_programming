#include <stdio.h>

/**
 * main - Entry point
 * Description: 'printing decimal numbers 0 - 9'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
