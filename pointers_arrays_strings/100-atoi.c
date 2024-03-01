#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string input
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int result = 0; 
	int sign = 1;   
	int pos = 0;    
	while (s[pos]) 
	{       
		if (s[pos] == '-') 
		{
			sign *= -1;
		}
		if (s[pos] >= '0' && s[pos] <= '9')
		{       
			result = result * 10 + (s[pos] - '0'); 
			if (s[pos + 1] < '0' || s[pos + 1] > '9')  
				break;  
		}    
		pos++; 
	}    
	return result * sign; 
}
