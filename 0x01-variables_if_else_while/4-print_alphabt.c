#include <stdio.h>

/**
*main-print the alphabet in lowercase
*followed by a new line, except q and e
*Return: 0 if successful
*/
int main(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'q' || alpha == 'e')
alpha++;
putchar(alpha);
}
return (0);
}
