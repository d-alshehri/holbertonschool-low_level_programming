#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * 
 * Return: integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    // Iterate through the string
    while (*s)
    {
        // If the current character is a number
        if (*s >= '0' && *s <= '9')
        {
            // Build the number
            num = num * 10 + (*s - '0');
        }
        // If the current character is a '+' or '-' sign, handle it
        else if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s == '+')
        {
            sign *= 1;
        }
        // If a non-numeric character is encountered after a number, break out
        else if (num > 0)
        {
            break;
        }
        s++;
    }

    // Apply the sign to the number and return it
    return sign * num;
}
