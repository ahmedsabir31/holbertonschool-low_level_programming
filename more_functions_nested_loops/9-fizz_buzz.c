#include <stdio.h>
/**
 * fizz_buzz - Program that prints the numbers from 1 to 100
 */
void fizz_buzz()
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz");
}
else if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
}
printf("\n");
}
int main()
{
fizz_buzz();
return 0;
}
