#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line
*/
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
_putchar(alphabet[0]);
for (int i = 1; alphabet[i] != '\0'; i++)
{
_putchar(alphabet[i]);
}
}
