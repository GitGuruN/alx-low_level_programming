#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and reverses the characters in the string in place.
 */
void rev_string(char *s)
{
int length = 0;
int index = 0;

while (s[length++])
{
length++;
}
for (index = length - 1; index >= length / 2; index--)
{
char temp = s[index];
s[index] = s[length - index - 1];
s[length - index - 1] = temp;
}
}
