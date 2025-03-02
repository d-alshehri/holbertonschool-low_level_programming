#include <stdio.h>

int _isupper(int c);

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return 1;
return 0;
}

int main(void)
{
char test1 = 'A';
char test2 = 'z';

printf("%c is uppercase? %d\n", test1, _isupper(test1));
printf("%c is uppercase? %d\n", test2, _isupper(test2));

return 0;
}
