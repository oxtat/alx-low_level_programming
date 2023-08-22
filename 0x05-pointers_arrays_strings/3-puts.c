#include "main.h"

/**
 * _puts - prints to the stdout
 * @str: String
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
