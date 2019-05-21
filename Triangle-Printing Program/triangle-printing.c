#include <stdio.h>

int main(void)
{
  unsigned int i, j, x;

  for (i = 1; i <= 10; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%s", "*");
    }
    puts("");
  }

  puts("");

  i = 0;
  j = 0;

  for (i = 10; i >= 1; i--)
  {
    for (j = 0; j < i; j++)
    {
      printf("%s", "*");
    }
    puts("");
  }

  puts("");

  i = 0;
  j = 0;

  for (i = 10; i >= 1; i--)
  {
    for (x = 1; x <= 10 - i; x++)
    {
      printf(" ");
    }
    for (j = 0; j < i; j++)
    {
      printf("%s", "*");
    }
    puts("");
  }

  puts("");

  i = 0;
  j = 0;
  x = 0;

  for (i = 1; i <= 10; i++)
  {
    for (x = 1; x <= 10 - i; x++)
    {
      printf(" ");
    }
    for (j = 0; j < i; j++)
    {
      printf("%s", "*");
    }
    puts("");
  }
}