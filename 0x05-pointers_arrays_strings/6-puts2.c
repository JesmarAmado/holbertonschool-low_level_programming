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
		a++;
		a++;
	}
	_putchar(10);
}
