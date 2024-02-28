#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The strong to be reversed
 */
void rev_string(char *s)
{
int str_lg = 0;
int i = 0
while (s[str_lg] ! = '\0')
{
str_lg++;
}
while (i < str_lg / 2)
{
temp = s[i];
s[i] = s [str_lg - i i - 1];
s [str_len - i - 1] = temp;
i++;
}
}
