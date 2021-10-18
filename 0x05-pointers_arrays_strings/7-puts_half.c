#include "main.h"

/**
 * puts_half - Entry
 *
 * @str: variable
 * Return: 0
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a])
	{
		a++;
	}

	b = 0;
	while (b < a / 2)
	{
		_putchar(str[a / 2]);
		a += 2;
		b++;
		if (str[a / 2] == '\0')
		{
			break;
		}
	}
	_putchar(10);
}
