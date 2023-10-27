#include "main.h"

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The input string.
 * @c: The character to search for.
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    for (; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return (&s[i]);
    }
    return (0);
}
