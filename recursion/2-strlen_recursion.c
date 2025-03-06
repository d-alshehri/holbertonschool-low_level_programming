#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 *
 * Description: This function uses recursion to traverse through each character
 * of the string until the null terminator is reached, and it counts the number
 * of characters before the null terminator.
 */
 
int _strlen_recursion(char *s){
int count = 0;
if (*s == '\0')
{return 0; }
else
{
count ++;
count += _strlen_recursion((s+1));
}
return count;
}
