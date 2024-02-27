#include <stdio.h>
/**
 * _puts - prints a string 
 * @str: pointer to the input string
 */
void _puts(char *str)
{
int i = 0; 
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}		                                        
