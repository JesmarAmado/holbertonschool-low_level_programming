#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int d;
	int u;

	d = 48;
	while (d <= 57)
	{
		u = 49;

		while (u <= 57)
		{
			if (d < u)
			{
				putchar(d);
				putchar(u);
				if (d == 56)
				{
					putchar(10);
					break;
				}
				putchar(32);
				putchar(44);
			}
			u++;
		}

		d++;
	}

	return (0);
}
