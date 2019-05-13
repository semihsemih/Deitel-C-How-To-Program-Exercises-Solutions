#include <stdio.h>

int main(void)
{
  double enteredInteger, storedFactorielValue = 1, constant_e = 0, factorielVal;

  printf("%s", "Enter a non-negative integer: ");
  scanf("%lf", &enteredInteger);

  factorielVal = enteredInteger;

  while (enteredInteger >= 1)
  {
    while (factorielVal >= 1)
    {
      storedFactorielValue = factorielVal * storedFactorielValue;
      factorielVal--;
    }

    enteredInteger--;
    constant_e = constant_e + (1 / storedFactorielValue);
    storedFactorielValue = 1;
    factorielVal = enteredInteger;
  }

  constant_e = 1 + constant_e;
  printf("%.2lf\n", constant_e);
}