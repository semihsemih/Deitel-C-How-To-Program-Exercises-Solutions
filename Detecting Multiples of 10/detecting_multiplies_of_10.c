#include <stdio.h>

int main(void)
{
  int count = 0;

  while (count < 100)
  {
    if (count % 10 == 0)
      puts("");

    printf("%s", "*");
    count++;
  }
  puts("");
}