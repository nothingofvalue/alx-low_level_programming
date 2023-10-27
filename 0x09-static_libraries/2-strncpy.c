#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
    int j;

    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[j] = src[j];
    }

    // Pad the destination string with null characters if necessary
    for (; j < n; j++)
    {
        dest[j] = '\0';
    }

    return dest;
}
