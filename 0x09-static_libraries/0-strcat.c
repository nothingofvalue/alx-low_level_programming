#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;

    // Find the end of the destination string
    while (dest[a] != '\0')
    {
        a++;
    }

    // Copy the source string to the end of destination string
    while (src[b] != '\0')
    {
        dest[a] = src[b];
        a++;
        b++;
    }

    // Add null terminator to the concatenated string
    dest[a] = '\0';

    return dest;
}
