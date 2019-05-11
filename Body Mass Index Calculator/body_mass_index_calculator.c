#include <stdio.h>

int main(void)
{
  float weight, height;
  float bmi;

  printf("Please enter your weight\n");
  scanf("%f", &weight);

  printf("Please enter your height\n");
  scanf("%f", &height);

  bmi = weight / (height * height);

  printf("Your body mass index is %.2f\n", bmi);

  if (bmi < 18.5)
  {
    printf("You are underweight.\n");
  }
  else if (bmi >= 18.5 && bmi <= 24.9)
  {
    printf("You are normal.\n");
  }
  else if (bmi >= 25 && bmi <= 29.9)
  {
    printf("You are overweight\n");
  }
  else if (bmi >= 30)
  {
    printf("You are obese\n");
  }
}