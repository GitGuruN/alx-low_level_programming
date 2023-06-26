#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints every other character of the string, starting with the first character.
 * It then prints a new line character.
 */
void puts2(char *str)
{
int i;
int j = 0;

while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
