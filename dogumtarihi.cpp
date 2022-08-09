#include <stdio.h>

int main(void) {
  int gun, ay, yil, fgun,fay ,fyil;
  int syil=2022, say=8, sgun=9;
  
  printf("Gun:");
  scanf("%d",&gun);
  printf("Ay:");
  scanf("%d",&ay);
  printf("Yil:");
  scanf("%d",&yil);
  
  fyil = syil-yil;
  fay= say-ay;
  fgun= sgun-gun;
  if (fay<0 && fgun<0){
    fyil -=1;
    fay +=11;
    fgun +=30;
    printf("%d yil  %d ay  %d gunluksunuz:", fyil,fay,fgun);
  }
    else if (fay<0 && fgun>0){
    fyil -=1;
    fay +=12;
    printf("%d yil  %d ay  %d gunluksunuz", fyil,fay,fgun);
  }
    else if (fay>0 && fgun<0){
    fay -=1;
    fgun +=30;
    printf("%d yil  %d ay  %d gunluksunuz", fyil,fay,fgun);
  }
  else{
  printf("%d yil  %d ay  %d gunluksunuz", fyil,fay,fgun);
  }
  return 0;
}
