#include <stdio.h>
/**
 * _puts - fonction personnalisée qui imprime une chaîne de caractères suivie d'un saut de ligne
 * @str: pointeur vers la chaîne de caractères à imprimer
 */
void _puts(char *str)
{	    
while (*str)
{
putchar(*str++);
}
putchar('\n');
}
