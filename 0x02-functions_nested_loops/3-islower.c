#include "main.h"
/**
 * _islower - check if a letter is lowercase or not
 *  @c: the character to check case of
 *
 *  Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
