#include <stdio.h>

int main(void)
{
  int count = 1, mainCount = 1;

  while (mainCount <= 8)
  {
    if (mainCount % 2 == 1)
    {
      while (count <= 8)
      {
        printf("%s", "* ");
        count++;
      }
      puts("");
      count = 1;
    }
    else if (mainCount % 2 == 0)
    {
      printf("%s", " ");

      while (count <= 8)
      {
        printf("%s", "* ");
        count++;
      }
      puts("");
      count = 1;
    }
    mainCount++;
  }
}