#include "main.h"
/**
*_strspn - Return the quantity of characters contained in a string
*@s: String
*@accept: Substring
*
*Return: string.
*/

unsigned int _strspn(char *s, char *accept)
{

unsigned int a;
unsigned int b;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (accept[b] == s[a])
{
break;
}
}
if (accept[b] == '\0')
{
break;
}
}
return (a);
}
