#include <stdio.h>

int main(void)
{
  int count=0, enteredNumber, remain;

  printf("%s", "Enter an integer (5 digits or fewer): ");
  scanf("%d", &enteredNumber);

  while (enteredNumber != 0)
  {
    remain = enteredNumber % 10;

    if (remain == 7)
      count++;

    enteredNumber /= 10;
  }

  printf("%d\n", count);
}