#include "main.h"

/**
 * positive_or_negative - Entry
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	if (i == 0)
	{
		printf("%i is zero\n", i);
	}
}
