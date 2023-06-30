#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337 (Leet speak)
 * @str: Input string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
char *ptr = str;
char *letters = "AEOTL";
char *leet_nums = "43071";
int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] + 32)
{
str[i] = leet_nums[j];
break;
}
}
}
return (ptr);
}
