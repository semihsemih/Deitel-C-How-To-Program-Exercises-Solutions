#include <stdio.h>

int main(void) {
  long int result=1;
  long int initialValue;

  for (initialValue = 1; initialValue <= 20; initialValue++)
  {
    result = (result) * (initialValue);
    printf("%lu!\t=\t%lu\n", initialValue, result);
  }
  
}