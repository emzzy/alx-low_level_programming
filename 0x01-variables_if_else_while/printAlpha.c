#include "main.h"

/**
*printAlpha - prints alphabet except c and k
*
*Return: void
*/
void printAlpha(void)
{
int i;

for (i = 97; i <= 122; i++)
{
if (i == 99 || i == 107)
continue;
_putchar(i);
_putchar('\n');
}
_putchar('\n');
}
