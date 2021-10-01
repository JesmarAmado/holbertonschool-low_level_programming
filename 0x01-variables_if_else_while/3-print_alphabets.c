#include<stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int b;

	n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar(10);

	return (0);
}
