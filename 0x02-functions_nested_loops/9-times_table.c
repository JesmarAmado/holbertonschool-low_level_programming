#include "main.h"
/**
 *  - Entry
 *
 * Return: 0
 */
void times_table(void)
{
	int a;
	int b;
	int p;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			p = a * b;
			if (p >= 10)
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			else
			{
				_putchar(32);
				_putchar(p + '0');
			}
			if (b != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			b++;
		}
		_putchar(10);
		a++;
	}
}
