#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
    int src_index = 0;
    
    if (src == NULL) {
        dest[0] = '\0'; // Handle null pointer case
        return dest;
    }

    while (src[src_index] != '\0') {
        dest[src_index] = src[src_index];
        src_index++;
    }

    dest[src_index] = '\0'; // Null-terminate the destination string

    return dest;
}
