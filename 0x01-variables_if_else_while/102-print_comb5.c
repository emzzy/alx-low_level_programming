#include <stdio.h>
/*prints all possible different combinations of two digit numbers
*seperated by a space
*Return: 0 if successful
*/
int main(void)
{
int a, b, c, d;
a = b = c = 0;
for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
