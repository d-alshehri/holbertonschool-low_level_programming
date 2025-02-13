#include <stdio.h>
/**
* main - Entry point
* Description: Prints all single digit numbers of base 10 starting from 0
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++) /* Loop from 0 to 9 */
putchar(n + '0'); /* Convert int to char by adding '0' */
putchar('\n'); /* Print newline */
return (0);
}
