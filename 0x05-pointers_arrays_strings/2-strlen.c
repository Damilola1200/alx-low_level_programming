#include "main.h"

/**
 * _strlen - length of a string
 * @s: the str to get length of.
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
