#include "main.h"

/**
 * print_last_digit - Entry
 *
 * @d: variable
 * Return: 4
 */
int print_last_digit(int d)
{
	int u;
	int a;

	if (d >= 0)
	{
		u = d % 10;
		_putchar(u + '0');
	}
	if (d < 0)
	{
		a = (d % 10) * -1;
		_putchar(a + '0');
	}

	return (4);
}
