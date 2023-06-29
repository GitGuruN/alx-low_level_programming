#include "main.h"
#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*dest_ptr != '\0')
dest_ptr++;
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
*dest_ptr = '\0';
return (dest);
}
