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

	a = 62;
	while (s[a])
	{
		_putchar(s[a]);
		s--;
	}
	_putchar(10);
}
