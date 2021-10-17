#include "main.h"

/**
 * rev_string - Entry
 *
 * @s: variable
 * Retrun: 0
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;

	a = 0;
	while (s[a])
	{
		a++;
	}

	b = 0;
	while (b < a / 2)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
		b++;
	}
}
