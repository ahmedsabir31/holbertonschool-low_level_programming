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
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
