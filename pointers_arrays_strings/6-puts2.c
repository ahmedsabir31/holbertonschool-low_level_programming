#include "main.h"
/**
 *puts2 - prints every other character of a string, starting with the first character
 *@str: the string from which characters are printed.
 */
void puts2(char *str)
{
int lg = 0;
int i;
int j;

while (str[lg] != '\0')
{
lg++;
}
_putchar(lg + '0');
j = 0;
for (i = lg - 1; i >= 0; i--)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
