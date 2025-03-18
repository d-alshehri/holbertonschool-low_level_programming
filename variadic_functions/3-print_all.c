#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on the format
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char c;
int num;
float f;

va_start(args, format);

while (format && format[i])
{
if (i > 0)
printf(", ");

switch (format[i])
{
case 'c':
c = va_arg(args, int);  // 'char' is promoted to 'int'
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
break;
default:
break;
}
i++;
}
printf("\n");
va_end(args);
}
