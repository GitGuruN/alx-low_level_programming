#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string from source to destination, up to n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *dest_ptr = dest;
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest_ptr[i] = src[i];
for (; i < n; i++)
dest_ptr[i] = '\0';
return (dest);
}
