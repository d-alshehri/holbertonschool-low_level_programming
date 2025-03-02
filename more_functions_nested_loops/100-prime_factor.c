#include <stdio.h>
#include <math.h>

int main(void)
{
    long number = 612852475143;
    long i;

    for (i = 2; i <= sqrt(number); i++)
    {
        while (number % i == 0)
        {
            number /= i;
        }
    }

    if (number > 1)
    {
        printf("%ld\n", number);
    }
    else
    {
        printf("%ld\n", i - 1);
    }

    return (0);
}
