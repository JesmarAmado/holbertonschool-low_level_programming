#include "main.h"

/**
 * print_diagonal - Entry
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		a = 1;

		while (a <= n)
		{
			b = 1;

			while (b <= n)
			{
				if (a == b)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
				b++;
			}
			_putchar(10);
			a++;
		}
	}
	else
	{
		_putchar(10);
	}
}
