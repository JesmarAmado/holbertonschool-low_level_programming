#include <stdio.h>

/**
 * main - Entry
 * 
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	a = 48;
	while(a <= 57)
	{
		b = 48;
		while(b <= 57)
		{
			c = 48;
			while(c <= 57)
			{
				d = 48;
				while(d <= 57)
				{
					if (((a + b) < (c + d) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
						if(a == 57 && b == 56 && c== 57 && d == 57)
						{
							putchar(10);
							break;
						}
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

	return (0);
}
