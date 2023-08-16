#include"main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabets a-z, ten times
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char letter = "a";
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= "z")
		{
			_putchar(alphabet[letter = "a"]);
			letter++;
		}
		_putchar("\n");
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
