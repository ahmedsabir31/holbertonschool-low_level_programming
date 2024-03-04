#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @c: char
 * @s: string
 * Return: char
 */
char *_strchr(char *s, char c)
{
	do
{
	if (*s != c)
		s++;
	else if(*s == c)
	
}
	while (*s);

	
	return (s);

	return ('\0');
}
