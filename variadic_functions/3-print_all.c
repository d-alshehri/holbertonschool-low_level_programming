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

        switch (*ptr)
        {
            case 'c':
                c = (char)va_arg(args, int);
                printf("%c", c);
                i = 1;
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                i = 1;
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                i = 1;
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                i = 1;
                break;
        }
        ptr++;
    }

    va_end(args);
    printf("\n");
}
