#include "main.h"

/**
*print_numbers - prints numbers
*Return: 0
*/
void print_numbers(void)
{
char c = 0;
while (c <= 9)
{
_putchar('0' + c);
c++;
}
_putchar('\n');
}
