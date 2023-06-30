#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13
 * @str: Input string
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
char *ptr = str;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
str[i] += 13;
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
str[i] -= 13;
}
return (ptr);
}
