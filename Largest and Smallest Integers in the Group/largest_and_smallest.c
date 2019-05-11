#include <stdio.h>

int main(void)
{
  int a, b, c;
  int max = 0;
  int min;

  puts("İlk sayıyı giriniz");
  scanf("%d", &a);

  if (a > max)
    max = a;

  min = a;

  puts("İkinci sayıyı giriniz");
  scanf("%d", &b);

  if (b > max)
    max = b;

  if (b < min)
    min = b;

  puts("Üçüncü sayıyı giriniz");
  scanf("%d", &c);

  if (c > max)
    max = c;

  if (c < min)
    min = c;

  printf("En büyük sayı: %d\n", max);
  printf("En küçük sayı: %d\n", min);
}
