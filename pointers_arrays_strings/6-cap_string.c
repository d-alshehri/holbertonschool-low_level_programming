#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
char separators[] = " \\t\\n,;.!?\"(){}";
int j;

if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

for (i = 1; str[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j] && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
break;
}
}
}
{return str; }
}
