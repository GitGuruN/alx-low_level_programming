#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and reverses the characters in the string in place.
 */
void rev_string(char *s)
{
int ctr = 0;
int i;
char temp=s[0];

while (s[ctr] != '0')
ctr++;

for (i = 0; i < ctr; i++)
{
ctr--;
temp = s[i];
s[i] = s[ctr];
s[ctr] = temp;
}
}
