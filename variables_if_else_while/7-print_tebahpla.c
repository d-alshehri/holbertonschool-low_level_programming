#include <stdio.h>
/**
* main - Entry point
* Description: Prints the alphabet in reverse order (z to a)
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
