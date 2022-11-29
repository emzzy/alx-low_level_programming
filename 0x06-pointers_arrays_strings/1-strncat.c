#include "main.h"

/**
*_strncat- concatenates 2 strings.
*@dest: first string.
*@src: second string.
*@n: number of bytes to use from src.
*Return: string.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0;
while (dest[i] != '\0')
i++;
while (src[k] != '\0')
{
dest[i] = src[k];
i++;
k++;
}
if (n > 0)
{
dest[i] = '\0';
}
return (dest);
}
