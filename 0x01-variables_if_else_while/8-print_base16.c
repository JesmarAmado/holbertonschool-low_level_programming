#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;
	char b = 97;

	while (a < 58)
	{
		putchar(a);
		a++;
	}

	while (b <= 102)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
