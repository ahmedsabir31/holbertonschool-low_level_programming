#include "main.h"
/**
 *puts_half - Prints halfs of a string ,followed by a new line.
 *@str: The string to be printed
 */
void puts_half(char *str)
{
int i = 0, lg = 0 , str;
while (str[i++])
lg++
if (lg % 2 == 0)
str = lg / 2;
else
str = (lg + 1)/2;
for (i = str; i < lg ; i++)
_putchar(str[i]);
_putchar('\n');
}
