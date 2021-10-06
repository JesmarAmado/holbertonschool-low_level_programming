#include "main.h"

/**
 * jack_bauer - Entry
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	while (a <= 50)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 53)
			{
				d = 48;
				while (d <= 57)
				{
					if ((a <= 49 && b <= 57) || (a <= 50 && b <= 51))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar(10);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
