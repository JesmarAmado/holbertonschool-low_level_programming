#include "main.h"

/**
 * _isupper - Entry
 *
 * @c: variable
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}

	return (0);
}