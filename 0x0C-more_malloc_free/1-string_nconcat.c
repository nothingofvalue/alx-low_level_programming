#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n characters from s2
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *concatenated;

    if (s1 != NULL)
    {
        while (s1[len1] != '\0')
            len1++;
    }

    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
            len2++;
    }

    if (n >= len2)
        n = len2;

    concatenated = malloc(sizeof(char) * (len1 + n + 1));
    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < n; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}
