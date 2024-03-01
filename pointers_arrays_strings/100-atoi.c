#include "main.h"
/**
 *@s: the string to convert
 *
 * Return :integer value
 */
int _atoi(char *s)
{
int sign = 1 ; in = 0; 
unsigned int result = 0;
while (! (s[in] <= '9' && s[in] >= '0' && s[i] != '\0')
{
if (s[in] == '-')
sign * = -1;
in++;
}
while (s[in] <= '9' && (s[in] >= '0' && s[in] != '\0'))
{
result = (result *10) + (s[in] - '0');
in++;
}
result * = sign;
return (result);
}
