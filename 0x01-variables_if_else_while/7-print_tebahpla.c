#include <stdio.h>

/**
*main-print the lowercase alphabet in reverse
*followed by a new line
*Return: 0 if successful
*/
int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
{
putchar(rev);
}
putchar('\n');
return (0);
}
