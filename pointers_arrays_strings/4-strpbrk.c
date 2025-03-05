#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - Locates the first occurrence in a string of any byte from another string.
 *
 * @s: The string to be searched.
 * @accept: The string containing the set of bytes to search for in s.
 *
 * Return: A pointer to the first occurrence of any byte from @accept in @s,
 *         or NULL if no such byte is found.
 *
 */

char *_strpbrk(char *s, char *accept) {
int sc = 0;
while(s[sc] != '\0')
{int ac=0;
while(accept[ac] != '\0')
{if (s[sc] == accept[ac])
{return s + sc; }
ac++;
}
}sc ++;
{return NULL; }
}
