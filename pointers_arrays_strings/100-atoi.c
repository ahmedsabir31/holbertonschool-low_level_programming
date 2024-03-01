#include "main.h"
/**
 *@s: the string to convert
 *
 * Return :integer value
 */
int _atoi(char *s)
{
int sign = 1 ; index = 0; 
unsigned int result = 0;
while (! (s[index] <= '9' && s[index] >= '0' && s[index] != '\0')
{
if (s[index] == '-')
sign * = -1;
index++;
}
while (s[index] <= '9' && (s[index] >= '0' && s[index] != '\0'))
{
result = (result *10) + (s[index] - '0');
index++;
}
result * = sign;
return (result);
}
