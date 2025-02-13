#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using only 2 putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *letters = "abcdefghijklmnopqrstuvwxyz\n";

while (*letters)  /* Iterate through the string */
putchar(*letters++);

return (0);
}
