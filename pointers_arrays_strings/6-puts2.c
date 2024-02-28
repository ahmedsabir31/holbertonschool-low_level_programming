#include "main.h"
/**
 *puts2 - prints every other character of a string, starting with the first character
 *@str: the string from which characters are printed.
 */
void puts2(char *str)
{
int a;
int b;

a = 0;
while (*(str + a) != '\0')
{
a++;
}
_putchar(a);
b = 0;
while (b < a)
{
if (b % 2 == 0)
{
_putchar(str[b]);
}
a--;
b++;
}
_putchar ('\n');
}
