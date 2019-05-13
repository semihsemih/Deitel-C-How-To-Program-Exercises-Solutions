#include <stdio.h>

int main(void)
{
  int enteredNumber, originalNumber, remainder, reversedInteger = 0;

  printf("%s", "Please enter five-digit number: ");
  scanf("%d", &enteredNumber);

  originalNumber = enteredNumber;

  while (enteredNumber != 0)
  {
    remainder = enteredNumber % 10;
    reversedInteger = reversedInteger * 10 + remainder;
    enteredNumber /= 10;
  }

  if (originalNumber == reversedInteger)
  {
    puts("This number is palindrome.");
  }
  else
  {
    puts("This number is not palindrome.");
  }
}