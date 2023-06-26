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
int start = 0;
int end;

// Calculate the length of the string
while (s[length] != '\0')
length++;
end = length - 1;
// Reverse the string by swapping characters from both ends
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
