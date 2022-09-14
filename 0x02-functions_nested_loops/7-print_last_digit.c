#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: the integer to print the number in question
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
