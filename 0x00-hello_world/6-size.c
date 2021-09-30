#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char num1;
	int num2;
	long int num3;
	long long int num4;
	float num5;

	printf("Size of a char: %zu byte(s)\n", sizeof(num1));
	printf("Size of an int: %zu byte(s)\n", sizeof(num2));
	printf("Size of a long int: %zu byte(s)\n", sizeof(num3));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(num4));
	printf("Size of a float: %zu byte(s)\n", sizeof(num5));
	return (0);
}
