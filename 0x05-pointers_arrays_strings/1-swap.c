#include "main.h"

/**
 * swap_int - check the code
 * @a: parameter
 * @b: parameter
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
