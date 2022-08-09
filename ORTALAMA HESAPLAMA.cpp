#include <stdio.h>
int main(void) {
  int vize,arasinav ,fnl;
  printf("Vize notunu girin:");
  scanf("%d",&vize);
  
printf("Ara sinav notunu girin:");
  scanf("%d",&arasinav);

  printf("Final notunu girin:");
  scanf("%d",&fnl);

  float ortalama = vize*0.4 +arasinav*0.1 +fnl*0.5;
  if (ortalama >= 50){
    printf("%f ortalama ile gectiniz,TEBRIKLER", ortalama);
  }
  else{
    printf("%f ortalama ile kaldiniz,DAHA COK CALISMALISINIZ!", ortalama);
  }
  return 0;
}
