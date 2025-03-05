#include "main.h"
#include <stddef.h>  /* For NULL */

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the bytes to match.
 *
 * Return: Pointer to the first matching byte in s, or NULL if no match found.
 */
char *_strpbrk(char *s, char *accept)
{
    char *a;

    if (s == NULL || accept == NULL)  /* Handle NULL inputs */
        return (NULL);

    while (*s)  /* Loop through each character in s */
    {
        a = accept;
        while (*a)  /* Check each character in accept */
        {
            if (*s == *a)  /* If there is a match, return pointer to it */
                return (s);
            a++;
        }
        s++;  /* Move to next character in s */
    }

    return (NULL);  /* Return NULL if no match found */
}
