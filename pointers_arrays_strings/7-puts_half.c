#include "main.h"
/**
*puts_half - Prints the second half of a string
*@str: Pointer to the string
*/
void puts_half(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
len = len / 2;
}
else
{
len = (len + 1) / 2;
}
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
