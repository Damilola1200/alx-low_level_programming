#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @str: string to be resversed
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
