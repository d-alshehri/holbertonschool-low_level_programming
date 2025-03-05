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
 * Description:
 * This function iterates over the string @s and searches for the first character
 * that matches any character in the string @accept. The function returns a pointer
 * to the byte in @s that matches one of the bytes in @accept, or NULL if no match
 * is found after scanning the entire string.
 *
 * Example:
 *     char *s = "hello, world";
 *     char *accept = "wo";
 *     char *result = _strpbrk(s, accept);
 *     printf("%s\n", result);  // Output: "o, world"
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
}
{return NULL; }
}
