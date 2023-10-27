#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: input string
 * @needle: substring to search for
 * Return: pointer to the beginning of the substring in haystack, or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        char *l = haystack;
        char *p = needle;

        while (*l == *p && *p != '\0')
        {
            l++;
            p++;
        }

        if (*p == '\0')
            return haystack;
    }

    return NULL; // Return NULL instead of 0 to indicate that the substring was not found
}
