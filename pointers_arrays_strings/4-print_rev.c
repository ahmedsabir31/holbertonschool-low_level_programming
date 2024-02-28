#include "main.h"
/**
 *print_rev - puts a string in reverse, followed by a new line
 *@s: pointer to the string to be printed in reverse. 
 */
void print_rev(char *s)
{
int lg = 0;
while (s[lg] ! = '\0')
{
lg ++
}
for (int i = lg -1 ; i >= 0 ; i--)
{
_putchar (s[i]);
}
_putchar('\n');
}
