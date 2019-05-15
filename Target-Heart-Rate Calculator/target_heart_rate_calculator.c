#include <stdio.h>

int main(void)
{
  int currentDate, currentMonth, currentYear, birthDate, birthMonth, birthYear;
  int calculatedDate, calculatedMonth, calculatedYear;
  int maxHeartRate;

  puts("Please enter current date");
  printf("%s", "Enter current date (1-30): ");
  scanf("%d", &currentDate);
  printf("%s", "Enter current month (1-12): ");
  scanf("%d", &currentMonth);
  printf("%s", "Enter current year: ");
  scanf("%d", &currentYear);

  puts("\nPlease enter birth date");
  printf("%s", "Enter birth date (1-30): ");
  scanf("%d", &birthDate);
  printf("%s", "Enter birth month (1-12): ");
  scanf("%d", &birthMonth);
  printf("%s", "Enter birth year: ");
  scanf("%d", &birthYear);

  if (currentDate < birthDate)
  {
    currentDate += 30;
    currentMonth--;
  }

  if (currentMonth < birthMonth)
  {
    currentMonth += 12;
    currentYear--;
  }

  calculatedDate = currentDate - birthDate;
  calculatedMonth = currentMonth - birthMonth;
  calculatedYear = currentYear - birthYear;

  maxHeartRate = 220 - calculatedYear;

  printf("\nYour age: %d\n", calculatedYear);
  printf("Your maximum heart rate: %d\n", maxHeartRate);
  printf("Your target-heart-rate range: %d - %d\n", (maxHeartRate * 50) / 100, (maxHeartRate * 85) / 100);
}