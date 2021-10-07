#include "main.h"

/**
 * more_numbers - Entry
 *
 * Return: 0
 */
void more_numbers(void)
{
	int d;
	int u;
	int x;
	int z;

	for (z = 48; z <= 57; z++)
	{
		for (d = 0;  d <= 14; d++)
		{
			u = d / 10;
			x = d % 10;
			if (d >= 10)
			{
				_putchar(u + '0');
			}
			_putchar(x + '0');
		}
		_putchar(10);
	}
}
