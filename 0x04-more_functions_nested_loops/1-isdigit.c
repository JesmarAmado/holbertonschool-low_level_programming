#include "main.h"

/**
 * _isdigit - Entry
 *
 * @c: variable
 * Return: 0
 */
int _isdigit(int c)
{
	if (((c <= 9 + '0') && (c >= -9 + '0')) || c == 0 + '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
