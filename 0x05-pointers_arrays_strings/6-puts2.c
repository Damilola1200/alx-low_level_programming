#include "main.h"

/**
 * puts2 - print reverse characters.
 * @str: validate the character
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0, len = 0;


	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
