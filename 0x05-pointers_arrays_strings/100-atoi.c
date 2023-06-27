#include <string.h>

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: This function copies the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer pointed to by dest.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
return (strcpy(dest, src));
}
