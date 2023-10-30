#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string; NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *conct;
    int i, ci, length1 = 0, length2 = 0;

    if (s1 == NULL)
        s1 = "";
    
    if (s2 == NULL)
        s2 = "";

    while (s1[length1] != '\0')
        length1++;

    while (s2[length2] != '\0')
        length2++;

    conct = malloc(sizeof(char) * (length1 + length2 + 1));

    if (conct == NULL)
        return (NULL);

    for (i = 0; i < length1; i++)
    {
        conct[i] = s1[i];
    }

    for (ci = 0; ci < length2; ci++, i++)
    {
        conct[i] = s2[ci];
    }

    conct[i] = '\0';

    return (conct);
}
