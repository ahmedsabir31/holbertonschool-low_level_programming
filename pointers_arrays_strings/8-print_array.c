#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
if (n <= 0) 
{
return; 
}

for (int i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]); 
}
printf("%d\n", a[n - 1]); 
}
