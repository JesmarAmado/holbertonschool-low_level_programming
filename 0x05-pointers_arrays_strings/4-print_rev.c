#include "main.h"

/**
 * print_rev - Entry
 *
 * @s: variable
 * Return: 0
 */
void print_rev(char *s)
{
	int a;
	int b;

	a = 0;
	while (s[a])
	{
		a++;
	}

	b = a - 1;
	while (s[b])
	{
		_putchar(s[b]);
		s--;
	}
	_putchar(10);
}
