#include "main.h"

/**
 * string_toupper - changes all lower cases to upper cases
 * @st: string to modify
 *
 * Return: char
 */
char *string_toupper(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
			st[i] -= 32;
	}

	return (st);
}
