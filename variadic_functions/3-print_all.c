#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, based on the format string.
 * @format: A string representing the types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
va_list args;

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf(", ");
        
i++;
}

printf("\n");
va_end(args);
}
