#include "main.h"

/**
 * _isalpha - check to see if input is a letter
 * @c: function to check if its a letter
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
