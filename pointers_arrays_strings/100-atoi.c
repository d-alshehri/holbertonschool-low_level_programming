#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * 
 * Return: integer value of the string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

while (*s)
{
if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else if (*s == '-')
{
sign *= -1;
}
else if (*s == '+')
{
sign *= 1;
}
else if (num > 0)
{
break;
}
s++;
}

{return sign * num; }
}
