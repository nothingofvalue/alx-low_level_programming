#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: string containing characters to search for
 * Return: pointer to the first occurrence in s of any character in accept,
 * or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return (s);
        }
        s++;
    }

    return ((char *)'\0'); // Explicitly cast '\0' to char * to avoid warnings
}
