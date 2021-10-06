#include "main.h"

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	else 
	{
		_putchar(n);
	}

	return (0);
}
