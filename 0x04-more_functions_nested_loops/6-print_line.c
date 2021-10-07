#include "main.h"

/**
 * print_line - Entry
 * @n: parameter
 * Return: 0
 */
void print_line(int n)
{
	int r;

	r = '_';

	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(r);
			n--;
		}

	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
