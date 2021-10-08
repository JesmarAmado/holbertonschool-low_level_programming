#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 5 == 0 || a % 3 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			putchar(' ');
		}
		a++;
	}
	putchar(10);
	return (0);
}
