#include "main.h"

/**
 * puts2 - Entry
 *
 * @str: variable
 * Return: 0
 */
void puts2(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a])
	{
		b = a + 1;
		if (str[b] == '\0')
		{
			_putchar('.');
			_putchar(10);
			break;
		}
		else
		{
			_putchar(str[a]);
			a += 2;
		}
		if (str[a] == '\0')
		{
			_putchar(10);
		}
	}
}
