#include "main.h"

/**
 * print_sign - find if input is pos, neg, 0r none/0
 * @n: Int to print sign from.
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
