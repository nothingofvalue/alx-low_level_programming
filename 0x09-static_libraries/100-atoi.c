#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: input string
 * Return: integer converted from input string, or 0 if invalid input
 */
int _atoi(char *s)
{
    int sign = 1;
    int index = 0;
    unsigned int result = 0;

    if (s == NULL || *s == '\0') {
        return 0; // Handle empty or null string
    }

    // Handle sign
    if (s[index] == '-') {
        sign = -1;
        index++;
    } else if (s[index] == '+') {
        index++;
    }

    // Convert string to integer
    while (s[index] >= '0' && s[index] <= '9') {
        result = (result * 10) + (s[index] - '0');
        index++;
    }

    return sign * result;
}
