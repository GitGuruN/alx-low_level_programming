#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursive - Helper function to calculate the natural square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if the guess is correct, -1 if the guess exceeds the square root.
 */
int _sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (sqrt_recursive(n, guess + 1));
}
}
