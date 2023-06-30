#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return (str);
}
