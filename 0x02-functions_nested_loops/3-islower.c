#include "main.h"

/**
 * _islower - check the code.
 * @c: variable
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (0);
	}

	return (0);
}
