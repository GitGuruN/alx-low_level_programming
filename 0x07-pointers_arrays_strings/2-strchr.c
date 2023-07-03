#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found
 */
char *_strchr(char *s, char c);
{
unsigned int i;

for (i = 0; i < *s; i++)
{
if (*s == c)
{
return (*s);
}
else
{
return (NULL);
}
}
}
