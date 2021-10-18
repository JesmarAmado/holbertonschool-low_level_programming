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

	a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a += 2;
		if (str[a - 1] == '\0')
		{
			break;
		}
	}
	_putchar(10);
}
