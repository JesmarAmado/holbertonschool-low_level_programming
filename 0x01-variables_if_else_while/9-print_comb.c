#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);

		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}

		if (a == 57)
		{
			putchar(10);
		}

		a++;

	}

	return (0);
}
