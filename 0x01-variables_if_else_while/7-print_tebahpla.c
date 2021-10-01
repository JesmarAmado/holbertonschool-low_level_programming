#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	char z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar(10);

	return (0);
}
