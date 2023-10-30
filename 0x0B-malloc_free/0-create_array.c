#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size `size` and initializes it with `c`
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array, NULL if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * (size + 1)); /* +1 for the null terminator */
    if (str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;

    str[size] = '\0'; /* Null-terminate the string */

    return (str);
}

