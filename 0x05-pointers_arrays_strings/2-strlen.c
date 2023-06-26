#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and returns the length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return length;
}
