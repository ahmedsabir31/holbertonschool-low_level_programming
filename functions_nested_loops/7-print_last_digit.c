#include "main.h"
/**
 * Returns the value of the last digit
 * @n - Write a function that prints the last digit of a number.
 * Return: void
 */
int print_last_digit(int n)
{
int a ;
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar (a +'0');
return (a);
}
