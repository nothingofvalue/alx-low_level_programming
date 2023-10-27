#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s consisting of
 * characters from accept.
 * @s: input string
 * @accept: string containing characters to match
 * Return: number of characters in the initial segment of s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int isAccepted[256] = {0}; // Assuming ASCII characters
    
    // Populate the acceptance map
    for (int i = 0; accept[i] != '\0'; i++) {
        isAccepted[(unsigned char) accept[i]] = 1;
    }

    // Count the characters in s that are in accept
    while (*s != '\0' && isAccepted[(unsigned char) *s]) {
        n++;
        s++;
    }

    return n;
}
