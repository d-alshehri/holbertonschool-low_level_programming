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

    va_start(args, format);

    while (format && format[i])
    {
        if (i > 0)
            printf(", ");

        if (format[i] == 'c')
            printf("%c", va_arg(args, int));  /* 'char' is promoted to 'int' */
        if (format[i] == 'i')
            printf("%d", va_arg(args, int));
        if (format[i] == 'f')
            printf("%f", va_arg(args, double));  /* 'float' is promoted to 'double' */
        if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str)
                printf("%s", str);
            if (!str)
                printf("(nil)");
        }

        i++;
    }

    printf("\n");
    va_end(args);
}
