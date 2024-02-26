#include "main.h"
/**
 * isupper - a function that checks for uppercase character
 *@c: Character to be checked
 * Return: 1 if c
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
