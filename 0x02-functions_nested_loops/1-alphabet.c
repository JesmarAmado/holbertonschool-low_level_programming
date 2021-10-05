#include <stdio.h>

#include "main.h"

/**
 * print_alphabet - Entry
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	putchar(10);
}
