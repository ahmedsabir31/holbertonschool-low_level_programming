#include "main.h"
/**
 *_isalpha - check for alphabetic character
 * @c: The character to be checked
 * Return: void
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
