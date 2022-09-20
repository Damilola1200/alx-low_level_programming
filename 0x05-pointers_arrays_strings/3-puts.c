#include "main.h"

/**
 * _puts - prints string followed by new line.
 * @str: input string.
 *
 * Return: no return
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
