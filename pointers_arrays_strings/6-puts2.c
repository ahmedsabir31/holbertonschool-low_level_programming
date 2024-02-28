#include "main.h"
/**
 *puts2 - prints every other character of a string, starting with the first character
 *@str: the string from which characters are printed.
 */
void puts2(char *str)
{
int i;
int j;

i = 0;
while (*(str + i) != '\0')
{
i++;
}
_putchar(i);
j = 0;
while (j < i)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
i--;
j++;
}
_putchar('\n');
}
