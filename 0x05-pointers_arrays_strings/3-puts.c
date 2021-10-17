#include "main.h"

/**
 * _puts - Entry
 *
 * @str: variable
 * Return: 0
 */
void _puts(char *str)
{
	while (str[0] != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
