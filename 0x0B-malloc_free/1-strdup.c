#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string in a new memory space
 * @str: input string to duplicate
 *
 * Return: pointer to the newly allocated duplicate string, NULL if fail
 */
char *_strdup(char *str)
{
    char *duplicate;
    int i, length = 0;

    if (str == NULL)
        return (NULL);

    while (str[length] != '\0')
        length++;

    duplicate = malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return (NULL);

    for (i = 0; i < length; i++)
        duplicate[i] = str[i];

    duplicate[length] = '\0'; /* Null-terminate the string */

    return (duplicate);
}

