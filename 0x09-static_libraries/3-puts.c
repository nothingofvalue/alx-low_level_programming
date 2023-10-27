#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: input string
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n'); // Print a new line at the end
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
