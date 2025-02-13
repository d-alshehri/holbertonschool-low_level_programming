#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 * then uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'Z'; ch++)
putchar(ch);

putchar('\n');

return (0);
}
