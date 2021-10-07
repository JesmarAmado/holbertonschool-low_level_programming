#include "main.h"

/**
 * print_numbers - Entry
 *
 * Return: 0
 */
void print_numbers(void)
{
	int a;

	a = 0 + '0';
	while (a <= 9 + '0')
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
