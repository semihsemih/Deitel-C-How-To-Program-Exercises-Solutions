#include <stdio.h>

int main(void)
{
  int dimension;

  printf("%s", "Enter the dimension of the square (between 1 and 20): ");
  scanf("%d", &dimension);

  int row = 1;

  while (row <= dimension)
  {
    int col = 1;

    while (col <= dimension)
    {
      if (row == 1 || row == dimension || col == 1 || col == dimension)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
      col++;
      ;
    }
    puts("");
    row++;
  }
}