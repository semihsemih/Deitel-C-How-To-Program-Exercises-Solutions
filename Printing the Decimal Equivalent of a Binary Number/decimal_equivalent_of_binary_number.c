#include <stdio.h>

int main(void)
{
  int enteredNumber, power = 1, remain, decimalNumber = 0;

  printf("%s", "Enter five-digit binary number: ");
  scanf("%d", &enteredNumber);

  while (enteredNumber != 0)
  {
    remain = enteredNumber % 10;
    decimalNumber = decimalNumber + (remain * power);

    power = power * 2;
    enteredNumber /= 10;
  }

  printf("In the decimal system: %d\n", decimalNumber);
}