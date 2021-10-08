#include "main.h"

/**
 * print_diagonal - Entry
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int r;

	r = 92;

	if (n > 0)
	{
		while(n > 0)
		{
			_putchar(r);
			n--;
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
