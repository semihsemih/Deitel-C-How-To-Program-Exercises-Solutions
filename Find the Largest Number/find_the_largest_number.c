#include <stdio.h>

int main(void)
{
  unsigned int counter = 0;
  int largest = 0;
  int number;

  while (counter < 10)
  {
    printf("%s", "Enter number: ");
    scanf("%d", &number);

    if (number > largest)
      largest = number;

    counter++;
  }
  printf("Largest of the numbers: %d\n", largest);
}