#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string in reverse order, followed by a new line character.
 */
void print_rev(char *s)
{
int c = 0;
	
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}
