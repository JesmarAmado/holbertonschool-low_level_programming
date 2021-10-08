#include "main.h"

/**
 * print_triangle - Entry
 * @size: parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int n;
	int b;
	int d;
	
	a = '#';

	if (size > 0)
	{
		n = 0;
		while (n < size)
		{
			while (size > 0)
			{
				b = 0;

				while (b < size)
				{
					_putchar(' ');
					b++;

				}
				while (d < size - 1)
				{
					_putchar(a);

				}
				size--;
				_putchar(10);
			}
			n++;
		}
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
