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
int a;

for (a = 0; a < 10; a++)
{
	printf("%d", a);
}
printf("\n");
return (0);
}
