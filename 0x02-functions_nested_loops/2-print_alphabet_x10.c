#include "main.h"

/**
 * print_alphabet_x10 - Entry
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	a = 97;
	
	while (a <= 97 + 9)
	{
		b = 97;
		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		a++;
		_putchar(10);
	}
}
