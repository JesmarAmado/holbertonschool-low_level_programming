#include "main.h"

/**
 * print_square - Entry
 * @size: parameter
 * Return: 0
 */
void print_square(int size)
{
	int r;
	int n;
	int a;

	r = '#';

	if (size > 0)
	{
		n = 0;

		while (n < size)
		{
			a = size;

			while (a > 0)
			{
				_putchar(r);
				a--;
			}
			_putchar(10);
			n++;
		}
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
