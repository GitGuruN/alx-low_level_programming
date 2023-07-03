#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be analyzed
 * @accept: Pointer to the string containing the characters to be matched
 *
 * Return: Number of bytes in the initial segment of @s consisting only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int found;

while (*s != '\0')
{
found = 0;
for (char *p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
found = 1;
break;
}
}
if (found == 0)
return (length);
length++;
s++;
}
return (length);
}
