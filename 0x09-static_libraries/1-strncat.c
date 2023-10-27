#include "main.h"

/**
 * _strncat - concatenate two strings, at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int src_len = 0;
    int i;

    // Find the length of dest string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Find the length of src string
    while (src[src_len] != '\0' && src_len < n)
    {
        src_len++;
    }

    // Check if there is enough space in dest to concatenate src
    if (dest_len + src_len < dest_len || dest_len + src_len >= n)
    {
        // Handle error: not enough space in dest
        // You can print an error message or handle it according to your requirements
        return dest;
    }

    // Concatenate src to dest
    for (i = 0; i < src_len; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Null-terminate the concatenated string
    dest[dest_len + src_len] = '\0';

    return dest;
}
