#include <stdio.h>
 
int main()
{
  int n, sum = 0, c, value;
 
  printf("Kac adet sayiyi toplamak istiyorsunuz?\n");
  scanf("%d", &n);
 
  printf(" %d adet sayi girin\n", n);
 
  for (c = 1; c <= n; c++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }
 
  printf("Toplam = %d\n", sum);
 
  return 0;
}
