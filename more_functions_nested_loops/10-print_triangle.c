#include "main.h"
/**
 *
 *
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return
}
for (int i�= 1 ; i <= size ; i++)
{
for (int j = 1 ; j <= i ; j++)
{
_putchar('#');
}
_putchar ('\n');
}
}
