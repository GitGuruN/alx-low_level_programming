#include "main.h"
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Description: This function converts the string pointed to by s to an integer.
 * It takes into account any preceding '+' or '-' signs before the number.
 * If there are no numbers in the string, the function returns 0.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}
else if (s[0] == '+')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
else
{
break;
}    
}
return (sign * result);
}
