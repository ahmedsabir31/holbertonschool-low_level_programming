include "main.h"
/**
 *_isdigit - A function that checks for a digit
 *@c: Character to be checked
 * Return: 1 if c
 */
int _isdigit(int c)
{
	if (c >= "0" && c <= "9")
		return (1);
	else 
		return (0);
}  
