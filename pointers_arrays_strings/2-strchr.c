#include <stdio.h>
#include <stdlib.h>

/**
* _strchr - finds the first occurrence of a character in a string.
*
* This function searches for the first occurrence of the character `c`
* in the string `s`. If found, it returns a pointer to that position.
* If the character is not found, it returns NULL.
*
* @s: the input string
* @c: the characer to find
*
* Return: A pointer to the first occurrence of `c`, or NULL if not found.
*/

char *_strchr(char *s, char c)
{int i;
for (i = 0; s[i] != '\0'; i++)
{
if (*(s + i) == c)
{return (s + i); }
}
if (c == '\0')
{return (s + i); }
else
{return (NULL); }
}
