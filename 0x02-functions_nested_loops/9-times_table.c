#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else if (i == 0)
			{
				_putchar(' ');
				_putchar(j * i + '0');
			}
			else
			{
				_putchar(' ');
				if (j * i < 10)
				{
					_putchar(' ');
				}
				_putchar(j * i / 10 + '0');
				_putchar(j * i % 10 + '0');
			}
			if (j != 10)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
