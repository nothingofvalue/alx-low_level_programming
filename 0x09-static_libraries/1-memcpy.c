#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to copy
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}
