#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * grints all simple digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar ((num % 10) + '0');
putchar('\n');
return (0);
}
