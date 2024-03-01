#include "main.h"
/**
 *_strcat - contenants two strings.
 *@src: the destination string.
 *Return: String.
 */
char *_strcat(char *dest, char *src)
{
int i = 0; m = 0
while (dest[i] != '\0')
i++;
while (src[m] != '\0')
{
dest[i] = src[m];
i++;
m++;
}
dest[i] = '\0';
return (dest);
}
