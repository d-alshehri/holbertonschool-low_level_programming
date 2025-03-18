#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr;
    char *str;
    int i;
    char c;
    int num;
    double f;

    va_start(args, format);
    ptr = format;
    i = 0;

    while (*ptr)
    {
        if (i && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
            printf(", ");

        if (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')
        {
            if (*ptr == 'c')
            {
                c = (char)va_arg(args, int);
                printf("%c", c);
            }
            if (*ptr == 'i')
            {
                num = va_arg(args, int);
                printf("%d", num);
            }
            if (*ptr == 'f')
            {
                f = va_arg(args, double);
                printf("%f", f);
            }
            if (*ptr == 's')
            {
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                if (str != NULL)
                    printf("%s", str);
            }
            i = 1;
        }

        ptr++;
    }

    va_end(args);
    printf("\n");
}
