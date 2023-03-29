#include <stdio.h>

/**
 *main- prints all possible different combinations of three digits
 *numbers must be seperated by comma and a space
 *Returns: zero
 */
int main()
{
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;
  for (a = 48; a < 58; a++)
    {
      for (b = 0; b < 58; b++)
	{
	  for (c = 0; c < 58; c++)
	    {
	      if (a != b && a < b)
		{
		  if (a != c && a < c)
		    {
		      if (b != c && b < c)
			{
			  putchar(a);
			  putchar(b);
			  putchar(c);
			  putchar(',');
			  putchar(' ');
			}
		    }
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
