#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		printf("%i", b);
		b++;
	}

	putchar (10);
	return (0);
}
