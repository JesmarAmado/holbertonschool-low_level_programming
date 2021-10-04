#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57 ; a++)
	{
		for (b = 48; b <= 57 ; b++)
		{
			for (c = 48; c <= 57 ; c++)
			{
				for (d = 48; d <= 57 ; d++)
				{
					if (((a + b) < (c + d) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
					if (a == 57 && c == 57 && d == 57 && b == 56)
					{
						putchar(10);
						break;
					}
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
