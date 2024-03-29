#include "main.h"

/**
 * *string_toupper - lowercase to uppercase
 * @s: string, array
 * Return: s
 */

char *string_toupper(char *s)
{
	const int UPPERCASE = 32;
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= UPPERCASE;
		i++;
	}

	return (s);
}
