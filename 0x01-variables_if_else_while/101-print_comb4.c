#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int u;

	c = 48;
	while (c <= 55)
	{
		d = 49;
		while (d <= 56)
		{
			u = 50;

			while (u <= 57)
			{
				if (c < d && c < u && d < u)
				{
					putchar(c);
					putchar(d);
					putchar(u);

					if (c == 55 && d == 56 && u == 57)
					{
						putchar(10);
						break;
					}
					if (d < u  && c < u)
					{
						putchar(44);
						putchar(32);
					}
				}
				u++;
			}
			d++;
		}
		c++;

	}
	return (0);
}
