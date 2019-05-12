#include <stdio.h>

int main(void)
{
  int number;
  int counter = 0;
  int largest = 0;
  int seecondLargest = 0;

  while (counter < 10)
  {
    printf("%s", "Enter number: ");
    scanf("%d", &number);

    if (number > largest)
    {
      largest = number;
    }
    else if (number < largest && number > seecondLargest)
    {
      seecondLargest = number;
    }

    counter++;
  }

  printf("\nLargest number is %d. Second largest number is %d\n", largest, seecondLargest);
}