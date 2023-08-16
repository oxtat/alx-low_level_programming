#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int a = 1;
	int b = 2;
	int c;

	while (b <= 4000000)
	{
		if (b % 2)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}

