#include <stdio.h>
#include <stdlib.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched.
 * @needle: The substring to locate in the haystack.
 *
 * Description:
 *   The _strstr function finds the first occurrence of the substring `needle`
 *   in the string `haystack`. The search is done character by character.
 *   The function stops searching when a match is found, or when the end of
 *   `haystack` is reached.
 *
 * Return: 
 *   - A pointer to the beginning of the located substring in `haystack`,
 *     or
 *   - NULL if the substring is not found.
 */
  
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
if (*needle == '\0')
{return haystack; }
while (haystack[i] != '\0')
{if (haystack[i] == needle[0]){
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
{j++; }
if (needle[j] == '\0')
{return (haystack + i); }
}
i++;
}
return NULL;
}
