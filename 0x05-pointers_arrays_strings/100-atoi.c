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
unsigned int ni = 0;

while (s[i])
{
if (s[i] == 45)
{
sign *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
resultat = 1;
ni = (ni * 10) + (s[i] - '0');
i++;
}
if (resultat == 1)
{
break;
}
i++;
}
ni *= sign;
return (ni);
}
