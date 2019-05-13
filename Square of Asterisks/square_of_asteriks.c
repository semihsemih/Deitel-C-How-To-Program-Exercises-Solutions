#include <stdio.h>

int main(void)
{
  int dimension;

  printf("%s", "Enter the dimension of the square (between 1 and 20): ");
  scanf("%d", &dimension);

    int row = 1;
  
  while (row <= dimension)
  {
    if (dimension > 20 || dimension < 1)
    {
      puts("A number was entered outside the given range!");
      break;
    }
    
    int col =1;
    while (col <= dimension)
    {
      printf("*");
      col++;
    }
    row++;
    puts("");
  }
}