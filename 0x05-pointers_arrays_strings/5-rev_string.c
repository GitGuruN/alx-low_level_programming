#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Reverses a string.
 * @str: Pointer to the string to be reversed.
 *
 * Description: This function takes a pointer
 * to a string and reverses the order
 * of the characters in the string using a loop.
 */
void rev_string(char *str)
{
int length = strlen(str);
int start = 0;
int end = length - 1;

while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
