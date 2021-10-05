#include <stdio.h>

#include "main.h"

/**
 * main - Entry
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
