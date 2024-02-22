#include "main.h"
/**
 * main - main block
 * Write a function that prints the alphabet, in lowercase
 * alphabet avec putcher.
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
