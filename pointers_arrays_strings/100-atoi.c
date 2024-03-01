#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string input
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int pos = 0;

if (s[pos] == '-')
{
sign = -1;
pos++;
}

while (s[pos] >= '0' && s[pos] <= '9')
{
if (result > int_max / 10 || (result == int_max / 10 && (s[pos] - '0') > int_max % 10))
{
if (sign == 1)
return int_max;
else
return int_min;
}

result = result * 10 + (s[pos] - '0');
pos++;
}

return result * sign;
}
