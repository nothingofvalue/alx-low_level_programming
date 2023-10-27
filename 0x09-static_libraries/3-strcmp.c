#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string
 * @s2: second string
 *
 * Return: negative value if s1 < s2, positive value if s1 > s2, 0 if s1 == s2
 */
int _strcmp(const char *s1, const char *s2)
{
    int i = 0;
    
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }

    return (s1[i] - s2[i]);
}
