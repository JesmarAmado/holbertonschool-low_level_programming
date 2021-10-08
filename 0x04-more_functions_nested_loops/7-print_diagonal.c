#include "main.h"

/**
 * print_diagonal - Entry
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int r;
	int a;

	r = 92;

	if (n >= 10)
	{
		while(n > 0)
		{
			if (n - 10 < 0)
			{
				a = n - 10;

				while (a < 0)
				{
					_putchar(32);
					a++;
				}
			}
			_putchar(r);
			_putchar(10);
			n--;
		}
	}
	if (n > 0 && n <= 9)
	{
		while (n > 0)
		{
			
			_putchar(r);
			n--;
		}
	}
	else 
	{
		_putchar(10);
	}
}
