#include "main.h"
/**
 * main - main block
 * Write a fonction that prints the alphabet, function print_alphabet
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
