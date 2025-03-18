#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    const char *ptr = format;
    char *str;
    int i = 0;

    while (*ptr && format)
    {
        if (i && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
            printf(", ");

        switch (*ptr)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                i = 1;
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                i = 1;
                break;
            case 'f':
                printf("%f", va_arg(args, double));
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
