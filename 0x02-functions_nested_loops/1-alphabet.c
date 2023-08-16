#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabets a-z
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char letter = "a";
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	while (letter <= "z")
	{
		_putchar(alphabet[letter = "a"]);
		letter++;
	}

	_putchar("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
