#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *letters = "abcdefghijklmnopqrstuvwxyz\n";

while (*letters) 
putchar(*letters++);

return (0);
}
