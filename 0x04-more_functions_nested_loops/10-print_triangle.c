#include "main.h"

/**
 * print_triangle - Entry
 * @size: parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int n;
	int b;

	if (size > 0)
	{
		n = 1;
		while (n <= size)
		{
			b = 1;
			while (b <= size)
			{
				if (b <= size - n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				b++;
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
