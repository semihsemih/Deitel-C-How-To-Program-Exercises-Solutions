/*
                    Separating Digits in an Integer

Write a program that inputs one five-digit number, separates the number into its 
individual digits and prints the digits separated from one another by three spaces each. 

[Hint: Use combinations of integer division and the remainder operation.] 

For example, if the user types in 42139, the program should print =>  4   2   1   3   9
*/

#include <stdio.h>

int main(void)
{
  int num;

  puts("Beş basamaklı sayı giriniz");
  scanf("%d", &num);

  printf("%d\t", num / 10000);
  num = num - ((num/10000)*10000);

  printf("%d\t", num/1000);
  num = num -((num/1000)*1000);

  printf("%d\t", num/100);
  num = num - ((num/100)*100);

  printf("%d\t", num/10);
  num = num - ((num/10)*10);

  printf("%d\n", num);
}