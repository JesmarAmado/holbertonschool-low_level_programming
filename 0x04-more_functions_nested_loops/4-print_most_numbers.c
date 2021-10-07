#include "main.h"

/**
 * print_most_numbers - Entry
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	a = 0 + '0';

	while (a <= 9 + '0')
	{
		if (a != (2 + '0') && a != (4 + '0'))
		{
			_putchar(a);
		}
		a++;
	}
	_putchar(10);
}
