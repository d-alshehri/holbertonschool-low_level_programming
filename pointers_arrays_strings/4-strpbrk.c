#include "main.h"
#include <stddef.h>

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
if (s == NULL || accept == NULL)
{return (NULL); }
while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
