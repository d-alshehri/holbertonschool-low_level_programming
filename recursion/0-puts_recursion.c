#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function uses recursion to print each character
 * of the string, calling itself until it reaches the null terminator
 * ('\0'). It calls _putchar to print each character.
 * When the end of the string is reached, the recursion stops.
 *
 * Return: This function does not return any value.
 */
 
 void _puts_recursion(char *s){
if (*s == '\0')
{return; }
_putchar(*s);
_puts_recursion(s+1);
}
