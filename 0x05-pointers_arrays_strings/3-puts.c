#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string to stdout, followed by a new line character.
 */
void _puts(char *str)
{
for(; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
