#include "main.h"

/**
 * *_memset - Entry
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	for ( ; i < n ; i++)
	{
		s[i] = '\0';
	}

	return (s);
}
