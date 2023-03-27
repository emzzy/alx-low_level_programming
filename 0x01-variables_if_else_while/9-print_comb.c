#include <stdio.h>

/**
*main-print all possible combinations of single digit numbers
*followed by a space
*Return: 0 if successful
*/
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
if (num < 57){
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
