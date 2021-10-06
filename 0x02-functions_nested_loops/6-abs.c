#include "main.h"

/**
 * main - Entry
 *
 * Return: 0
 */

int _abs(int);

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return(x);
	}
	else
	{
		return(x);
	}

	return (0);
}
